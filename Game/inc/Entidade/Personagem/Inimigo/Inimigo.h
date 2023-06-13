#pragma once

#include "Entidade/Personagem/Personagem.h"
#include "Entidade/Personagem/Jogador/Jogador.h"

class Inimigo : public Personagem
{
protected:
	Jogador* pPlayer;

	static const bool attacker;

public:
	Inimigo();
	virtual ~Inimigo();

	void setPlayer(Jogador* pPla);

	bool getAttacker() const override;
};