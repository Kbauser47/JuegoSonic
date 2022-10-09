#include "PerSonicClas.h"

PerSonicClas::PerSonicClas(string _nombre, string _color, float _altura, float _puntos_vida, float _velocidad, float _capacidad_mon, float _peso)
{
	nombre = _nombre;
	color = _color;
	altura = _altura;
	puntos_vida = _puntos_vida;
	velocidad = _velocidad;
	capacidad_mon = _capacidad_mon;
	peso = _peso;
}

void PerSonicClas::HacerseBolita()
{
	cout << "Personaje Principal" << endl;
	cout <<nombre<<" se volvio bolita" << endl;
}

void PerSonicClas::MoneySubs()
{
	cout <<nombre<<" hagarro monedas" << endl;
}

void PerSonicClas::ChoqueDest()
{
	cout <<nombre<<" fue a "<<velocidad << "niveles de vlocidad parachocar con un enemigo" << endl;
}

void PerSonicClas::Autosanacion()
{
	cout <<nombre<<" se acaba de curar a "<<puntos_vida<<" pt. de vida" << endl;
}
