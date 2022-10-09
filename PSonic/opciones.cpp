#include "opciones.h"

opciones::opciones(string _figura,float _altura,float _ancho)
{
	figura = _figura;
	altura = _altura;
	ancho = _ancho;
}

void opciones::pausa()
{
	cout << "Se puso en pausa" << endl;
}

void opciones::salir()
{
	cout << "Se esta saliento del juego" << endl;
}

void opciones::configuraciones()
{
	cout << "Se pueden realizar configuraciones al juego" << endl;
}
