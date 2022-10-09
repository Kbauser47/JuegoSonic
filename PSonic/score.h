#include <iostream>
using namespace std;
#pragma once
class score
{
private:
	float tiempo_limite, tiempo_recorrido;
	int puntos_nivel,cantidad_vidas ;
public:
	score();
	void setscore(float ,int ,int);
	void mostrar();
	void cambiar();
	float getscoreTiempoReco();
	int getscorePuntNivel();
	int getscoreCantVid();
};

