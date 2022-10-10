#include "Enemigos.h"

Enemigos::Enemigos()
{
	figura = "Ovalada";
	color = "Verde";
	nombre = "Badniks";
}

void Enemigos::setEnemigos(int _cantidad ,int _tamaño)
{
	cantidad = _cantidad;
	tamaño = _tamaño;
}

void Enemigos::QuitarVida()
{
	cout << nombre << " te atacó"<<endl;
}

void Enemigos::volar()
{
	cout <<nombre<< " está volando" << endl;
}

void Enemigos::desaparecer()
{
	cout <<nombre<< " desapareció" << endl;
}

int Enemigos::getEnemigosCantidad()
{
	return cantidad;
}

int Enemigos::getEnemigosTamaño()
{
	return tamaño;
}
