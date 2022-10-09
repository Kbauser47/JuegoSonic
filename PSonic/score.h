#include <iostream>
using namespace std;
#pragma once
class score
{
private:
	float tiempo;
	int puntos_nivel,cantidad_vidas ;
public:
	score(float, int, int);
	void mostrar();
	void cambiar();
};

