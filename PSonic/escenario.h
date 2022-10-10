#include <iostream>
using namespace std;
#pragma once
class escenario
{
private:
	string nombre;
	float altura, ancho, limite_sup, limite_inf;
public:
	escenario();
	void setescenario(float,float);
	void cambiar();
	void deslizable();
	float getescenarioAltura();
	float getescenarioAncho();
};

