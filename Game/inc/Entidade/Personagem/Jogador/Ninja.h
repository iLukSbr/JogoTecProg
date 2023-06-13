#pragma once

#include "Entidade/Personagem/Jogador/Jogador.h"

namespace Jogadores {
	class Ninja : public Jogador
	{
	private:
		static const unsigned int id;

		static float mass;

		static const sf::Vector2f vel_max;

	public:
		Ninja(sf::Vector2f pos, int pl_life);
		~Ninja();

		unsigned int getId() const override;

		float getMass() const override;

		void move() override;
		void attack() override;

		bool getJumped() const override;// est� pulando?
	};
}