#include <iostream>
using namespace std;
#pragma once
class Enemigos
{
private:
	string figura,color,nombre;
	int cantidad,tama�o;
public:
	Enemigos(string, string, string, int, int);
	void QuitarVida();
	void volar();
	void desaparecer();
};

