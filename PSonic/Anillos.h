#include <iostream>
using namespace std;
#pragma once
class Anillos
{
private:
	string color,forma;
	float dimensiones, vel_giro;
	int cantidad;
public:
	Anillos(string, string, float, float,int);
	void Unavida();
	void desaparecer();
	void absorvibles();
};

