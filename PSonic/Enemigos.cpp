#include "Enemigos.h"

Enemigos::Enemigos(string _figura, string _color, string _nombre, int _cantidad, int _tama�o)
{
	figura = _figura;
	color = _color;
	nombre = _nombre;
	cantidad = _cantidad;
	tama�o = _tama�o;
}

void Enemigos::QuitarVida()
{
	cout << cantidad << " " << nombre << " te atacaron"<<endl;
}

void Enemigos::volar()
{
	cout << cantidad << " " <<nombre<< " estan volando" << endl;
}

void Enemigos::desaparecer()
{
	cout << cantidad << " " <<nombre<< " desaparecio" << endl;
}
