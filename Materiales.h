#include <iostream>
#include <string>
#include <stdio.h>
#ifndef ingClass
#define ingClass

using namespace std;

class Materiales {

public:

	int cantMetal;
	int cantLlantas;


	Materiales() {

		this->cantMetal = 0;
		this->cantLlantas = 0;
	}

	//getters y setters

	void setMetal(int cantMetal) {
		this->cantMetal += cantMetal;
	}

	void setLlantas(int cantLlantas) {
		this->cantLlantas += cantLlantas;
	}

	int getMetal() {
		return cantMetal;
	}

	int getLlantas() {
		return cantLlantas;
	}

	//Creando carroceria

	bool creaCarroceria(int numero, int metal) {
		bool carroceriaHecha = false;

		if (metal >= 45 * numero) {

			this->cantMetal = metal - (45 * numero);
			setMetal(cantMetal);
			carroceriaHecha = true;
		}
		else {

			cout << "\nNo hay suficientes kg de metal.";
		}

		return carroceriaHecha;
	}
	
	//Montando llantas

	bool montarLlantas(int numero, int llantas) {
		bool llantasMontadas = false;

		if (llantas >= 1 * numero) {

			cantLlantas = 0 - (4 * numero);
			setLlantas(cantLlantas);
			llantasMontadas = true;
		}
		else {

			cout << "\nNo hay suficientes llantas.";
		}

		return llantasMontadas;
	}
};
#endif
