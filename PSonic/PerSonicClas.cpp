#include "PerSonicClas.h"

PerSonicClas::PerSonicClas()
{
	nombre = "Sonic";
	color = "Azul";
	altura = 30.2;
	velocidad = 60;
	peso = 28;
}

void PerSonicClas::setPerSonicClas(float _puntos_vida, float _capacidad_mon)
{
	puntos_vida = _puntos_vida;
	capacidad_mon = _capacidad_mon;
}

float PerSonicClas::getPerSonicClasPV()
{
	return puntos_vida;
}

float PerSonicClas::getPersonicClasCM()
{
	return capacidad_mon;
}

void PerSonicClas::HacerseBolita()
{
	cout <<nombre<<" se volvio bolita" << endl;
}

void PerSonicClas::MoneySubs()
{
	cout <<nombre<<" hagarro monedas" << endl;
}

void PerSonicClas::ChoqueDest()
{
	cout <<nombre<<" fue a "<<velocidad << " niveles de velocidad para chocar con un enemigo" << endl;
}

void PerSonicClas::Autosanacion()
{
	cout <<nombre<<" se acaba de curar sus puntos de vida" << endl;
}