#include "pch.h"
#include "Entidade/Entidade.h"

Gerenciador::Grafico* Entidade::pGerGraf(nullptr);

Entidade::Entidade()
{
	sfx.setRelativeToListener(false);
	sfx.setMinDistance(70.f);
	sfx.setAttenuation(2.f);
	sf::Listener::setUpVector(0.f, 0.f, 1.f);
}

Entidade::~Entidade()
{
}

void Entidade::setGerGraf(Gerenciador::Grafico* pauxGerGraf)
{
	pGerGraf = pauxGerGraf;
}

void Entidade::draw()
{
	pGerGraf->desenhaElemento(body);
}

void Entidade::changePos(sf::Vector2f dif_pos)
{
	body.move(dif_pos);
}

void Entidade::setEntPos(sf::Vector2f pos)
{
	body.setPosition(pos);
}

sf::Vector2f Entidade::getPos() const
{
	return body.getPosition();
}

sf::Vector2f Entidade::getEntSize() const
{
	return body.getSize();
}

sf::Vector2f Entidade::getVel() const
{
	string erro = "Solicitou velocidade de entidade fixa.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

bool Entidade::getRetardant() const
{
	string erro = "Perguntou se � retardante para algu�m que n�o � obst�culo.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

bool Entidade::getRetardable() const
{
	string erro = "Perguntou se uma entidade im�vel � retard�vel.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

bool Entidade::getJumped() const
{
	string erro = "Solicitou estado do pulo de entidade que n�o pula.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

bool Entidade::getFacingLeft() const
{
	string erro = "Solicitou dire��o da mira de entidade im�vel.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

float Entidade::getMass() const
{
	string erro = "Solicitou massa de entidade que n�o � afetada pela gravidade.";
	try { throw runtime_error(erro); }
	catch (...) { 
		cerr << erro << endl;
		exit(1);
	}
}

float Entidade::getSlowness() const
{
	string erro = "Solicitou lentid�o de entidade n�o retardante.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

float Entidade::getJumpStrength() const
{
	string erro = "Solicitou for�a do pulo de entidade que n�o pula.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

int Entidade::getDamage() const
{
	string erro = "Solicitou dano de entidade n�o atacante.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

int Entidade::getLife() const
{
	string erro = "Solicitou vida de entidade n�o danific�vel.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::applyDamage(int ent_damage)
{
	string erro = "Tentou aplicar dano em entidade n�o danific�vel.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::applySlowness(float ent_slowness)
{
	string erro = "Tentou retardar entidade que n�o � afetada pela lentid�o.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::setAtacou()
{
	string erro = "Tentou atacar com entidade n�o atacante.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::setDireita()
{
	string erro = "Tentou mudar a dire��o de entidade im�vel para a direita.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::setEsquerda()
{
	string erro = "Tentou mudar a dire��o de entidade im�vel para a esquerda.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::move()
{
	string erro = "Tentou mover entidade fixa.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::attack()
{
	string erro = "Tentou fazer entidade n�o atacante atacar.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::setGun(Entidade* gun)
{
	string erro = "Tentou dar arma a entidade que n�o usa armas.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::setEntColidiu(Entidade* pauxColidiu)
{
	string erro = "N�o encontrou o ponteiro pColidiu.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::setColidiu()
{
	string erro = "N�o encontrou setColidiu.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

bool Entidade::getGodMode() const
{
	string erro = "Entidade n�o tem God Mode.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

Entidade* Entidade::getArma() const
{
	string erro = "Solicitou arma de entidade sem arma.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

void Entidade::setJumpedHeight(float height)
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::setColidiuBaixo()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::unsetColidiuBaixo()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::setColidiuCima()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::unsetColidiuCima()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::unsetJumped()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::setFlying()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::unsetFlying()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::setAllowJump()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::unsetAllowJump()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

float Entidade::getJumpedHeight()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

bool Entidade::getColidiuBaixo()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

bool Entidade::getColidiuCima()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

bool Entidade::getFlying()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::resetRot()
{
	string erro = "erro.";
	try { throw runtime_error(erro); }
	catch (...) {
		//cerr << erro << endl;
		//exit(1);
	}
}

void Entidade::setClockZero(sf::Time aux_tempo)
{
	string erro = "Tento mudar tempo de entidade que n�o tem rel�gio.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

sf::Time Entidade::getClock()
{
	string erro = "Solicitou tempo de entidade que n�o tem rel�gio.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

string Entidade::getApelido() const
{
	string erro = "Solicitou apelido de n�o jogador.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}

int Entidade::getPontuacao() const
{
	string erro = "Solicitou pontua��o de n�o jogador.";
	try { throw runtime_error(erro); }
	catch (...) {
		cerr << erro << endl;
		exit(1);
	}
}