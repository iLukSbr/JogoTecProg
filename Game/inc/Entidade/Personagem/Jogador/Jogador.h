#pragma once

#include "Entidade/Personagem/Personagem.h"
#include "Entidade/Arma/Arma.h"

class Jogador : public Personagem
{
protected:
	string apelido;// apelido do jogador

	bool retardable;// sua velocidade pode ser reduzida?

	static const float jump_strength;// altura m�xima de pulo

	bool attacker;// est� apto a atacar?

	int pontuacao;// pontua��o do jogador

	static const float gun_pos;// posi��o de empunhamento da arma

	Arma* pArma;// arma equipada

	bool god_mode = false;// cheat imune a ataques e gravidade

	int cadence = 3;// cad�ncia do ataque m�ltiplo

	sf::Time cadence_delay = sf::milliseconds(55);// espera entre tiros m�ltiplos
	sf::Time burst_delay = sf::milliseconds(1500);// espera entre rajadas
	sf::Time normal_delay = sf::milliseconds(500);// espera normal entre disparos

	sf::Vector2f vel_max;

public:
	Jogador(sf::Vector2f aux_vel_max);
	virtual ~Jogador();

	bool getRetardable() const override;// sua velocidade pode ser reduzida?

	float getJumpStrength() const override;// altura m�xima de pulo?

	void executar();// a��es
	void setGun(Entidade* gun) override;// equipa uma arma
	bool getGodMode() const override;
	Entidade* getArma() const override;
	void attack_single();
	void attack_burst();
	string getApelido() const override;
	int getPontuacao() const override;
	void setApelido(string apelido_tmp);
	void setPontuacao(int pontuacao_tmp);
};