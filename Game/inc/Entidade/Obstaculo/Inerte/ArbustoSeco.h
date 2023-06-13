#pragma once

#include "Entidade/Obstaculo/Inerte/Inerte.h"

namespace Obstaculos {
	namespace Inertes {
		class ArbustoSeco : public Inerte
		{
		private:
			static const int id = 21;

		public:
			ArbustoSeco(sf::Vector2f pos);
			~ArbustoSeco();

			unsigned int getId() const override;
		};
	}
}