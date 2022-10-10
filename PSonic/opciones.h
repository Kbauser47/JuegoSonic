#include <iostream>
using namespace std;
#pragma once
class opciones
{
private:
	string figura;
	float altura,ancho;
public:
	opciones();
	void setopciones(float, float);
	void pausa();
	void salir();
	void configuraciones();
	float getopcionesAlto();
	float getopcionesAncho();
};

