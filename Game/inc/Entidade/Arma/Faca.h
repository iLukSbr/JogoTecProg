#pragma once

#include "Entidade/Arma/Arma.h"

namespace Armas {
	class Faca : public Arma
	{
	private:
		static const int damage;// dano que causa

		static const unsigned int id;

		bool attacker;

		sf::SoundBuffer slash;

		sf::SoundBuffer hit;

		sf::Sound sfx2;

		float angle = 40.f;

	public:
		Faca(sf::Vector2f pos);
		~Faca();

		bool getAttacker() const override;// est� atacando?

		int getDamage() const override;// dano que causa?

		unsigned int getId() const override;// id?

		void attack() override;// ataca

		void resetRot() override;
	};
}