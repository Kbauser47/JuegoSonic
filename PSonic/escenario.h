#include <iostream>
using namespace std;
#pragma once
class escenario
{
private:
	string nombre;
	float altura, ancho, limite_sup, limite_inf;
public:
	escenario(string, float, float, float, float);
	void cambiar();
	void deslizable();
};

