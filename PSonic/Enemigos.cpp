#include "Enemigos.h"

Enemigos::Enemigos(string _figura, string _color, string _nombre, int _cantidad, int _tamaño)
{
	figura = _figura;
	color = _color;
	nombre = _nombre;
	cantidad = _cantidad;
	tamaño = _tamaño;
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
