#include <iostream>
using namespace std;
#pragma once
class opciones
{
private:
	string figura;
	float altura,ancho;
public:
	opciones(string,float,float);
	void pausa();
	void salir();
	void configuraciones();
};

