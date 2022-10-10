#include "Enemigos.h"

Enemigos::Enemigos()
{
	figura = "Ovalada";
	color = "Verde";
	nombre = "Badniks";
}

void Enemigos::setEnemigos(int _cantidad ,int _tama�o)
{
	cantidad = _cantidad;
	tama�o = _tama�o;
}

void Enemigos::QuitarVida()
{
	cout << nombre << " te atac�"<<endl;
}

void Enemigos::volar()
{
	cout <<nombre<< " est� volando" << endl;
}

void Enemigos::desaparecer()
{
	cout <<nombre<< " desapareci�" << endl;
}

int Enemigos::getEnemigosCantidad()
{
	return cantidad;
}

int Enemigos::getEnemigosTama�o()
{
	return tama�o;
}
