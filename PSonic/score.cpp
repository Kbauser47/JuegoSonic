#include "score.h"

score::score()
{
	tiempo_limite = 10;
}

void score::setscore(float _tiempo_recorrido, int _puntos_nivel, int _cantidad_vidas)
{
	tiempo_recorrido = _tiempo_recorrido;
	puntos_nivel = _puntos_nivel;
	cantidad_vidas = _cantidad_vidas;
}

void score::mostrar()
{
	cout << "PUNTOS DEL JUEGO" << endl;
	cout << "Se mostró los datos requeridos" << endl;
}

void score::cambiar()
{

	cout << "El score cambio" << endl ; 
}

float score::getscoreTiempoReco()
{
	return tiempo_recorrido;
}

int score::getscorePuntNivel()
{
	return puntos_nivel;
}

int score::getscoreCantVid()
{
	return cantidad_vidas;
}
