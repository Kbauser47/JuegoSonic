#include <iostream>
using namespace std;
#pragma once
class Enemigos
{
private:
	string figura,color,nombre;
	int cantidad,tamaņo;
public:
	Enemigos();
	void setEnemigos(int, int);
	void QuitarVida();
	void volar();
	void desaparecer();
	int getEnemigosCantidad();
	int getEnemigosTamaņo();
};

