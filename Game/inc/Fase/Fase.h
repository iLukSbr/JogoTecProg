#pragma once

#include "Lista/ListaEntidades.h"
#include "Gerenciador/Grafico.h"
#include "Gerenciador/Colisao.h"
#include "Gerenciador/Eventos.h"

/* entidades */
#include "Entidade/Personagem/Jogador/Lutadora.h"
#include "Entidade/Personagem/Jogador/Ninja.h"
#include "Entidade/Personagem/Inimigo/Chefao/Apofis.h"
#include "Entidade/Personagem/Inimigo/Chefao/Nidogue.h"
#include "Entidade/Personagem/Inimigo/CorpoACorpo/Medjai.h"
#include "Entidade/Personagem/Inimigo/CorpoACorpo/Spartacus.h"
#include "Entidade/Personagem/Inimigo/Disparador/Horus.h"
#include "Entidade/Personagem/Inimigo/Disparador/Merlin.h"
#include "Entidade/Obstaculo/Inerte/ArbustoFlorido.h"
#include "Entidade/Obstaculo/Inerte/ArbustoSeco.h"
#include "Entidade/Obstaculo/Danoso/ArmadilhaDeLancas.h"
#include "Entidade/Obstaculo/Danoso/Cacto.h"
#include "Entidade/Obstaculo/Retardante/AreiaMovedica.h"
#include "Entidade/Obstaculo/Retardante/Lama.h"
#include "Entidade/Obstaculo/Inerte/Plataforma/Areal.h"
#include "Entidade/Obstaculo/Inerte/Plataforma/Gramado.h"
#include "Entidade/Projetil/EsferaDeFogo.h"
#include "Entidade/Projetil/EsferaDeGelo.h"
#include "Entidade/Projetil/Flecha.h"
#include "Entidade/Arma/Arco.h"
#include "Entidade/Arma/Faca.h"
#include "Entidade/Arma/Espada.h"

#include "Entidade/Entidade.h"


class Fase 
{
protected:
	ListaEntidades* list;
	static Gerenciador::Grafico* ger_grafico;
	Gerenciador::Colisao* colisor;
	static Gerenciador::Eventos* ger_eventos;
	sf::Texture background_texture;
	sf::RectangleShape background;
	sf::RectangleShape background_auxiliar;
	Jogador* j1, *j2;
	Arma* arma;

public:
	Fase();
	~Fase();

	virtual int executar() = 0;
	virtual void criarJogador() = 0;
	virtual void criarInimigos() = 0;
	virtual void criarObstaculos() = 0;

	void draw() { list->drawAll(); }
	void move() { list->moveAll(); }
};