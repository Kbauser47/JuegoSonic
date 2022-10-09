#include "Anillos.h"

Anillos::Anillos(string _color, string _forma, float _dimesiones, float _vel_giro, int _cantidad)
{ 
	color = _color;
	forma = _forma;
	dimensiones = _dimesiones;
	vel_giro = _vel_giro;
	cantidad = _cantidad;
}

void Anillos::Unavida()
{
	cout <<cantidad<<" anillos protejen una vida" << endl;
}

void Anillos::desaparecer()
{
	cout <<cantidad<<" anillos desaparecieron despues de un choque" << endl;
}

void Anillos::absorvibles()
{
	cout <<cantidad<<" anillos fueron absorvidos" << endl; 
}
