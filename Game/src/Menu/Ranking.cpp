#include "pch.h"
#include "Menu/Ranking.h"

namespace Menu
{

	Ranking::Ranking()
	{
		fundo.setPosition(0.f, 0.f);
		fundo.setSize((sf::Vector2f)ger_grafico->getWindowSize());
		fundo.setFillColor(sf::Color::Black);

		if (fonte.loadFromFile("Game/assets/font/SquareGame.otf"))
			printf("Fonte carregada");
		else
			printf("Fonte n�o carregada");

		Titulo.setFont(fonte);
		Titulo.setString("RANKING");
		Titulo.setPosition(800.f, 50.f);
		Titulo.setCharacterSize(45);

		//Titulo.setFont(fonte);
		//Titulo.setString("RANKING");
		//Titulo.setPosition(480.f, 50.f);
		//Titulo.setCharacterSize(20);

		Voltar.setFont(fonte);
		Voltar.setString("Voltar ao menu");
		Voltar.setPosition(670.f, 400.f);
		Voltar.setCharacterSize(45);

		Sair.setFont(fonte);
		Sair.setString("Sair");
		Sair.setPosition(800.f, 520.f);
		Sair.setCharacterSize(45);
	}

	Ranking::~Ranking()
	{
	}

	int Ranking::executar()
	{
		ger_grafico->getWindow()->setMouseCursorVisible(true);
		ger_grafico->getCamera()->setCenter(ger_grafico->getWindowSize().x / 2.f, ger_grafico->getWindowSize().y / 2.f);

		ger_grafico->desenhaElemento(fundo);
		ger_grafico->desenhaElemento(Titulo);
		ger_grafico->desenhaElemento(Voltar);
		ger_grafico->desenhaElemento(Sair);

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			if (sf::Mouse::getPosition().x > 660 && sf::Mouse::getPosition().x < 1100 &&
				sf::Mouse::getPosition().y > 400 && sf::Mouse::getPosition().y < 540)
				return 0;

			//if (sf::Mouse::getPosition().x > 790 && sf::Mouse::getPosition().x < 1100 &&
			//	sf::Mouse::getPosition().y > 560 && sf::Mouse::getPosition().y < 690)
			//	exit(1);
		}
		return 3;
	}

}

