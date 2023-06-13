#pragma once

#include "Entidade/Personagem/Inimigo/Inimigo.h"
#include "Entidade/Projetil/Projetil.h"

namespace Inimigos {
	class Disparador : public Inimigo
	{
	protected:
		Projetil* pProjetil;// ponteiro do proj�til

		static const bool retardable;// � retard�vel?

		static const float attack_radius;// raio de a��o
		static const float cast_height;// altura do disparo

		static const sf::Time attack_delay;// tempo entre disparos

	public:
		Disparador();
		virtual ~Disparador();

		bool getRetardable() const override;// � retard�vel?

		void move() override;// move-se
	};
}