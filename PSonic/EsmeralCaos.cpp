#include "EsmeralCaos.h"

EsmeralCaos::EsmeralCaos(string _nombre, string _color, int _cantidad)
{
	nombre = _nombre;
	color = _color;
	cantidad = _cantidad;
}

void EsmeralCaos::poder_ilim()
{
	cout <<"Adquiriste "<<nombre<< " y Otorga poder ilimitado" << endl;
}

void EsmeralCaos::eabsorvibles()
{
	cout <<cantidad<<" "<< nombre << "s fue absorvido" << endl;
}
