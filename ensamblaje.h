#include <iostream>
#include <string>
#include <thread>
#include <chrono>   
#include "Materiales.h"
#ifndef makerClass
#define makerClass

using namespace std;

class Maker {

	Materiales i;

public:

	int cantLlantas;
	int temperatura;
	bool encendido;

	Maker() {

		this->cantLlantas = 0;
		this->temperatura = 75;
		this->encendido = false;
	}

	//getters and setters

	int getTemp() {

		return temperatura;
	}

	int getEstatus() {

		return encendido;

	}

	//Starting the Coffee Maker and making the coffee

	void Estatus() {
		cout << "\nEncendiendo robots. Esto podria tomar un momento.";

		while (temperatura< 185) {

			cout << "\n..." << temperatura << " grados";

			temperatura += 10;

			this_thread::sleep_for(std::chrono::seconds(1 / 10));

		}

		if (temperatura >= 185) {

			cout << "\nLos robots se han encendido exitosamente.";
			encendido = true;

		}
	}

	int ensamblarCarro(int cantidad, int metal, int llantas) {
		bool carroceriaEnsamblada, llantasMontadas;

		carroceriaEnsamblada = i.creaCarroceria(cantidad, metal);
		llantasMontadas = i.montarLlantas(cantidad, llantas);

		if (carroceriaEnsamblada == true && llantasMontadas == true && encendido == true) {
			this->i.setMetal(-(45 * cantidad));
			this->i.setLlantas(-(4 * cantidad));


			return cantidad;
		}

		else {

			cout << "\nO no hay materiales o los robots no estan encendidos.";
			cout << "\n";
		}

		return 0;
	}

	void ordenCompleta(int carro) {

		if (carro >= 1) {

			cout << "\nVehiculos ensamblados exitosamente";
			cout << "\nTenga un buen dia!";
		}
	}
};
#endif
