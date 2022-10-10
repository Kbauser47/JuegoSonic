#include "escenario.h"

escenario::escenario()
{
	nombre = "Castillo";
	limite_sup = 4;
	limite_inf = 2;
}

void escenario::setescenario(float _altura, float _ancho)
{
	altura = _altura;
	ancho = _ancho;
}

void escenario::cambiar()
{
	cout <<nombre<< " cambio de escenario" << endl;
}

void escenario::deslizable()
{
	cout <<"El escenario " << nombre << " se esta deslizando" << endl;
}

float escenario::getescenarioAltura()
{
	return altura;
}

float escenario::getescenarioAncho()
{
	return ancho;
}
