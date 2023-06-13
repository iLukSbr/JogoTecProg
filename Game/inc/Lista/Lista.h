#pragma once

/* C�digo baseado no v�deo do Felipe Alvez Barboza, monitor de 2020*/
#include "pch.h"

using namespace std;

template<class Tipo>
class Lista
{
private:

	template <class Tipo> class Elemento
	{
	private:
		Elemento<Tipo>* pProx;
		Tipo* dados;

	public:
		Elemento() { pProx = nullptr; dados = nullptr; }
		~Elemento() {}

		void setProx(Elemento<Tipo>* pP) { pProx = pP; }
		void setDados(Tipo* dd) { dados = dd; }

		Elemento<Tipo>* getProx() { if (pProx) return pProx; else return nullptr; }
		Tipo* getDados() { if (dados) return dados; else return nullptr; }
	};


	Elemento<Tipo>* pInicio;
	Elemento<Tipo>* pFinal;
	int tam;

public:
	Lista();
	~Lista();

	int getTamanho() { return tam; }
	Tipo* getItem(int posicao);

	Tipo* operator[](int n);

	void push(Tipo* pT);
	void pop(Tipo* pT);
	void clear();

};

/*-------------------------------*/

template<class Tipo>
inline Lista<Tipo>::Lista()
{
	pInicio = nullptr;
	pFinal = nullptr;
	tam = 0;
}

template<class Tipo>
inline Lista<Tipo>::~Lista()
{
}

template<class Tipo>
inline Tipo* Lista<Tipo>::getItem(int posicao)
{
	Elemento<Tipo>* temp = pInicio;

	//Testar se a lista esta vazia
	if (temp == nullptr)
	{
		cout << "A lista est� vazia" << endl;
		return nullptr;
	}
	else
	{
		if (posicao == 0)
			return temp->getDados();
		else
		{
			for (int i = 0; i < posicao; i++)
			{
				temp = temp->getProx();
			}

			return temp->getDados();
		}

	}

}

template<class Tipo>
inline Tipo* Lista<Tipo>::operator[](int n)
{
	Elemento<Tipo> *temp = pInicio;

	if (n < 0 || n > tam)
		cout << "Segmentation Fault" << endl;

	for (int i = 0; i < n; i++)
	{
		temp = temp->getProx();
	}
	return temp->getDados();
}

template<class Tipo>
inline void Lista<Tipo>::push(Tipo* pT)
{

	if (pInicio == nullptr) //Lista vazia
	{
		pInicio = new Elemento<Tipo>();
		if (pT)
		{
			pInicio->setDados(pT);
			tam++;
		}
		else
			cout << "Elemento n�o adicionado na lista" << endl;

		pFinal = pInicio;
	}
	else //Lista n�o vazia
	{
		Elemento<Tipo> *temp = new Elemento<Tipo>();

		if (pT)
		{
			temp->setDados(pT);
			tam++;
		}
		else
			cout << "Elemento n�o adicionado na lista" << endl;

		pFinal->setProx(temp);
		pFinal = temp;
	}
}

template<class Tipo>
inline void Lista<Tipo>::pop(Tipo* pT)
{
	if (pT)
	{

		if (pInicio == nullptr)
		{
			cout << "N�o havia elementos na lista" << endl;
		}
		else
		{
			Elemento<Tipo>* temp = pInicio;
			Elemento<Tipo>* tempAnt = nullptr;

			while (temp->getDados() != pT)
			{
				tempAnt = temp;
				temp = temp->getProx();
			}

			if (temp == pInicio)
				pInicio = temp->getProx();
			else if (temp == pFinal)
			{
				tempAnt->setProx(nullptr);
				pFinal = tempAnt;
			}
			else
				tempAnt->setProx(temp->getProx());

			delete temp;
			tam--;

		}
	}
	else
		cout << "Ponteiro Nulo" << endl;
}

template<class Tipo>
inline void Lista<Tipo>::clear()
{
	Elemento<Tipo>* temp = pInicio;

	if (pInicio) // Se a lista n�o estiver vazia
	{
		while (temp != pFinal)
		{
			delete(temp->getDados());
			temp = temp->getProx();
		}
			delete(temp);
	}
}

