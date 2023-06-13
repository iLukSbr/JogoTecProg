#include "pch.h"
#include "Entidade/Personagem/Inimigo/Chefao/Chefao.h"

namespace Inimigos {
	const bool Chefao::retardable = false;

	const float Chefao::action_radius = 500.f;// raio de a��o

	const int Chefao::cadence = 2;// cad�ncia do ataque m�ltiplo

	const sf::Time Chefao::cadence_delay = sf::milliseconds(20);// espera entre tiros m�ltiplos
	const sf::Time Chefao::burst_delay = sf::milliseconds(3000);// espera entre rajadas

	Chefao::Chefao() :
		pProjetil(nullptr)
	{
	}

	Chefao::~Chefao()
	{
	}

	void Chefao::move()
	{
		if (pPlayer && !pPlayer->getGodMode() && pPlayer->getPos().y > body.getPosition().y - action_radius && pPlayer->getPos().y < body.getPosition().y + action_radius)
		{
			if (pPlayer->getPos().x < body.getPosition().x) {
				facing_left = true;
				body.setOrigin(body.getSize().x, 0.f);
				body.setScale(-1.f, 1.f);
				if (pPlayer->getPos().x + pPlayer->getEntSize().x < body.getPosition().x - action_radius)
					body.move(sf::Vector2f(-vel.x, 0.f));
			}
			else if (pPlayer->getPos().x > body.getPosition().x) {
				facing_left = false;
				body.setOrigin(0.f, 0.f);
				body.setScale(1.f, 1.f);
				if (pPlayer->getPos().x + pPlayer->getEntSize().x > body.getPosition().x + action_radius)
					body.move(sf::Vector2f(vel.x, 0.f));
			}
			if (fabs(pPlayer->getPos().x - body.getPosition().x) < action_radius) {
				if (clock.getElapsedTime() - attack_delay > attack_instant) {
					attack_instant = clock.getElapsedTime();
					attack_delay = cadence_delay;
					int i = 0;
					do {
						if (clock.getElapsedTime() - attack_instant > attack_delay) {
							attack();
							i++;
							attack_instant = clock.getElapsedTime();
							cast_height -= .2f;
						}
					} while (i <= cadence);
					cast_height = .8f;
					attack_instant = clock.getElapsedTime();
					attack_delay = burst_delay;
				}
			}
		}
	}

	bool Chefao::getRetardable() const
	{
		return retardable;
	}
}
