#include "score.h"

score::score(float _tiempo, int _puntos_nivel, int _cantidad_vidas)
{
	tiempo = _tiempo;
	puntos_nivel = _puntos_nivel;
	cantidad_vidas = _cantidad_vidas;
}

void score::mostrar()
{
	cout << "PUNTOS DEL JUEGO" << endl;
	cout << "Time : " << tiempo << "\nPuntaje : " << puntos_nivel << "\nVidas : " << cantidad_vidas << endl;
}

void score::cambiar()
{
	cout << "El score cambio" << endl ; 
}
