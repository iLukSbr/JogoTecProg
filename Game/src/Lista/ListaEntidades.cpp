#include "pch.h"
#include "Lista/ListaEntidades.h"

ListaEntidades::ListaEntidades()
{
}

ListaEntidades::~ListaEntidades()
{
}

void ListaEntidades::moveAll()
{
	int i;
	Entidade* tmp;
	for (i = 0; i < Lista.getTamanho(); i++)
	{
		if(Lista.getItem(i) && Lista.getItem(i)->getMovable())
			Lista.getItem(i)->move();
		if (Lista.getItem(i) && Lista.getItem(i)->getDamageable() && Lista.getItem(i)->getLife() <= 0) {
			pop(Lista.getItem(i));
		}
	}
}

void ListaEntidades::attackAll()
{
	int i;
	for (i = 0; i < Lista.getTamanho(); i++)
	{
		if (Lista.getItem(i)->getAttacker())
			Lista.getItem(i)->attack();
	}
}

void ListaEntidades::drawAll()
{
	int i;
	for (i = 0; i < Lista.getTamanho(); i++)
	{
		Lista.getItem(i)->draw();
	}
}