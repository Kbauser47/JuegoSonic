#include <iostream>
#include "Anillos.h"
#include "Enemigos.h"
#include "EsmeralCaos.h"
#include "PerSonicClas.h"
#include "escenario.h"
#include "score.h"
#include "opciones.h"

using namespace std;
int main() {

	PerSonicClas* psc1 = new PerSonicClas();
	psc1->setPerSonicClas(100, 100);
	psc1->HacerseBolita();
	psc1->Autosanacion();
	psc1->ChoqueDest();

	EsmeralCaos *esc2 = new EsmeralCaos("esmeralda", "rosa", 5);

	esc2->poder_ilim();
	esc2->eabsorvibles();

	Anillos *an3 = new Anillos("amarillo", "redonda", 10, 5, 10);

	an3->Unavida();
	an3->desaparecer();
	an3->absorvibles();

	Enemigos *enm4 = new Enemigos("ovalada", "verde", "Badniks", 5, 10);

	enm4->QuitarVida();
	enm4->volar();

	escenario* es5 = new escenario("Castillo", 10, 100, 7, 10);

	es5->cambiar();
	es5->deslizable();

	score *sc6 = new score(12.2, 1025, 5);

	sc6->mostrar();

	opciones *opc7 = new opciones("cuadrado", 12, 12);

	opc7->configuraciones();

	return 0;
}