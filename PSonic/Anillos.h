#include <iostream>
using namespace std;
#pragma once
class Anillos
{
private:
	string color,forma;
	float alto,ancho, vel_giro;
	int cantidad;
public:
	Anillos();
	void setAnillos(string, float, float, int);
	void Unavida();
	void desaparecer();
	void absorvibles();
	string setsetAnillosColor();
	float setAnillosAlto();
	float setAnillosAncho();
	int setAnillosCantidad();
};

