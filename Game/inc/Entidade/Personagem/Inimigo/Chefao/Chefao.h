#pragma once

#include "Entidade/Personagem/Inimigo/Inimigo.h"
#include "Entidade/Projetil/Projetil.h"

namespace Inimigos {
	class Chefao : public Inimigo
	{
	protected:
		Projetil* pProjetil;// ponteiro do proj�til

		static const bool retardable;// � retard�vel?

		static const float action_radius;// raio de a��o
		float cast_height = .8f;// altura do disparo

		static const int cadence;// cad�ncia do ataque m�ltiplo

		static const sf::Time cadence_delay;// espera entre tiros m�ltiplos
		static const sf::Time burst_delay;// espera entre rajadas

	public:
		Chefao();
		virtual ~Chefao();

		bool getRetardable() const override;// � retard�vel?

		void move() override;// move-se
	};
}