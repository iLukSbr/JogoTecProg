#include "pch.h"
#include "Entidade/Arma/Faca.h"

namespace Armas {
	const int Faca::damage = 2;// dano que causa

	const unsigned int Faca::id = 92;

	Faca::Faca(sf::Vector2f pos) :
		attacker(false)
	{
		textura.loadFromFile(string(IMG) + "Faca.png");
		body.setTexture(&textura);
		body.setPosition(pos);
		body.setSize(sf::Vector2f(60.f, 100.f));
		slash.loadFromFile(string(SFX) + "knife-slash.wav");
		sfx2.setBuffer(slash);
		hit.loadFromFile(string(SFX) + "knife-hit.wav");
		sfx.setBuffer(hit);
		if (facing_left)
			body.setRotation(angle);
		else
			body.setRotation(-angle);
	}

	Faca::~Faca()
	{
	}

	bool Faca::getAttacker() const
	{
		return attacker;
	}

	int Faca::getDamage() const
	{
		return damage;
	}

	unsigned int Faca::getId() const
	{
		return id;
	}

	void Faca::attack()
	{
		if (facing_left)
			body.setRotation(-angle);
		else
			body.setRotation(angle);
		angle += 20.f;
		if (angle > 60.f)
			angle = 40.f;
		sfx.setPosition(sf::Vector3f(body.getPosition().x, 0.f, body.getPosition().y));
		sfx2.setPosition(sf::Vector3f(body.getPosition().x, 0.f, body.getPosition().y));
		if (colidiu && pColidiu && pColidiu->getDamageable()) {
			pColidiu->applyDamage(damage);
			sfx2.play();
		}
		else
			sfx.play();
		colidiu = false;
		pColidiu = nullptr;
	}

	void Faca::resetRot()
	{
		if (facing_left)
			body.setRotation(-angle);
		else
			body.setRotation(angle);
	}
}