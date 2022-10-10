#include "opciones.h"

opciones::opciones()
{
	figura = "Cuadrada";
}

void opciones::setopciones(float _alto, float _ancho)
{
	altura = _alto;
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

float opciones::getopcionesAlto()
{
	return altura;
}

float opciones::getopcionesAncho()
{
	return ancho;
}
