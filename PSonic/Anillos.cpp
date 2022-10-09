#include "Anillos.h"

Anillos::Anillos()
{ 
	forma = "Redonda";
	vel_giro = 12;
}

void Anillos::setAnillos(string _color,float _alto, float _ancho, int _cantidad)
{
	color = _color;
	alto = _alto;
	ancho = _ancho;
	cantidad = _cantidad;

}

void Anillos::Unavida()
{
	cout <<"Los anillos protejen una vida" << endl;
}

void Anillos::desaparecer()
{
	cout <<"Los anillos desaparecieron despues de un choque" << endl;
}

void Anillos::absorvibles()
{
	cout <<"Los anillos fueron absorvidos" << endl; 
}

string Anillos::setsetAnillosColor()
{
	return color;
}

float Anillos::setAnillosAlto()
{
	return alto;
}

float Anillos::setAnillosAncho()
{
	return ancho;
}

int Anillos::setAnillosCantidad()
{
	return cantidad;
}
