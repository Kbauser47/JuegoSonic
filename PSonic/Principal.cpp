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

	//PERONAJE SONIC
	PerSonicClas* psc1 = new PerSonicClas();
	psc1->setPerSonicClas(100, 100);

	cout << "\nPersonaje principal_______________________" << endl;

	psc1->HacerseBolita();
	psc1->Autosanacion();
	psc1->ChoqueDest();

	cout << "Los puntos de vida son: " << psc1->getPerSonicClasPV() << endl;

	//ESMERALDAS DEL CAOS
	EsmeralCaos* esc2 = new EsmeralCaos();
	esc2->setEsEsmeralCaos("esmeralda", "rosa");

	cout << "\nEsmeraldas del juego_______________________" << endl;

	esc2->poder_ilim();
	esc2->eabsorvibles();

	cout << "Nombre: " << esc2->getEsEsmeralCaosNombre() << "	Color: " << esc2->getEsEsmeralCaosColor() << endl;

	//ANILLOS
	Anillos* an3 = new Anillos();
	an3->setAnillos("Amarillos", 6, 4, 80);

	cout << "\nAnillos del juego__________________________" << endl;

	an3->Unavida();
	an3->desaparecer();
	an3->absorvibles();

	cout << "Hay " << an3->getAnillosCantidad() << " anillos de color " << an3->getsetAnillosColor() << endl;

	//ENEMIGOS
	Enemigos* enm4 = new Enemigos();
	enm4->setEnemigos(10, 5);

	cout << "\nEnemigos del juego_________________________" << endl;

	enm4->QuitarVida();
	enm4->volar();

	cout << "Hay " << enm4->getEnemigosCantidad() << " enemigos que te lleva con " << enm4->getEnemigosTamaño() << " cabezas" << endl;

	//ESCENARIO
	escenario* es5 = new escenario();
	es5->setescenario(20, 100);

	cout << "\nEscenario del juego________________________" << endl;

	es5->cambiar();
	es5->deslizable();

	cout << "Este escenario tiene " << es5->getescenarioAncho() << " pies de ancho y " << es5->getescenarioAltura() << " de alto" << endl;

	//OPCIONES
	opciones* opc7 = new opciones();
	opc7->setopciones(4, 4);

	cout << "\nOpciones del juego_________________________" << endl;

	opc7->configuraciones();
	opc7->pausa();
	opc7->configuraciones();

	cout << "El tamaño de esta figura es de " << opc7->getopcionesAlto() << " x " << opc7->getopcionesAncho() << endl;

	//SCORE
	score* sc6 = new score();
	sc6->setscore(2, 23151, 3);

	cout << "\nScore del juego____________________________" << endl;

	sc6->mostrar();
	cout << "	Time : " << sc6->getscoreTiempoReco() << "			Puntaje : " << sc6->getscorePuntNivel() << "		Vidas : " << sc6->getscoreCantVid() << endl;
	
	return 0;
}