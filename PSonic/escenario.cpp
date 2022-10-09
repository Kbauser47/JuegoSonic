#include "escenario.h"

escenario::escenario(string _nombre, float _altura, float _ancho, float _limite_sup, float _limite_inf)
{
	nombre = _nombre;
	altura = _altura;
	ancho = _ancho;
	limite_sup = _limite_sup;
	limite_inf = _limite_inf;
}

void escenario::cambiar()
{
	cout << "ESCENARIO\n" << endl;
	cout <<nombre<< " cambio de escenario" << endl;
}

void escenario::deslizable()
{
	cout << nombre << " para que de la ilucion del caminar por "<< ancho<<" metros" << endl;
}
