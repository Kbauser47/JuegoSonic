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

	cout << "Los puntos de vida son: " << psc1->getPerSonicClasPV() << endl;

	EsmeralCaos *esc2 = new EsmeralCaos();
	esc2->setEsEsmeralCaos("esmeralda", "rosa");

	esc2->poder_ilim();
	esc2->eabsorvibles();

	cout << "Nombre: " << esc2->getEsEsmeralCaosNombre() << "	Color: " << esc2->getEsEsmeralCaosColor() << endl;

	Anillos *an3 = new Anillos();
	an3->setAnillos("Amarillos", 6, 4, 80);

	an3->Unavida();
	an3->desaparecer();
	an3->absorvibles();

	cout << "Hay " << an3->getAnillosCantidad() << " anillos de color " << an3->getsetAnillosColor() << endl;

	Enemigos *enm4 = new Enemigos("ovalada", "verde", "Badniks", 5, 10);

	enm4->QuitarVida();
	enm4->volar();

	escenario* es5 = new escenario("Castillo", 10, 100, 7, 10);

	es5->cambiar();
	es5->deslizable();

	score *sc6 = new score();

	sc6->setscore( 2, 23151, 3);
	sc6->mostrar();
	cout << "	Time : " << sc6->getscoreTiempoReco() << "			Puntaje : " << sc6->getscorePuntNivel() << "		Vidas : " << sc6->getscoreCantVid() << endl;

	opciones *opc7 = new opciones("cuadrado", 12, 12);

	opc7->configuraciones();

	return 0;
}