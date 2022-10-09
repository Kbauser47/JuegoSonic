#include <iostream>
using namespace std;
#pragma once
class PerSonicClas
{
private:

	string nombre,color;
	float altura,puntos_vida,velocidad,capacidad_mon,peso;

public:
	PerSonicClas();
	void setPerSonicClas(float,float);
	void HacerseBolita();
	void MoneySubs();
	void ChoqueDest();
	void Autosanacion();
	float getPerSonicClasPV();
	float getPersonicClasCM();


};

