#include "EsmeralCaos.h"

EsmeralCaos::EsmeralCaos()
{
	cantidad = 5;
}

void EsmeralCaos::setEsEsmeralCaos(string _nombre, string _color)
{
	nombre = _nombre;
	color = _color;
}

void EsmeralCaos::poder_ilim()
{
	cout <<"Reciviste poder ilimitado" << endl;
}

void EsmeralCaos::eabsorvibles()
{
	cout <<"Hay " << cantidad << " en este nivel" << endl;
}

string EsmeralCaos::getEsEsmeralCaosNombre()
{
	return nombre;
}

string EsmeralCaos::getEsEsmeralCaosColor()
{
	return color;
}
