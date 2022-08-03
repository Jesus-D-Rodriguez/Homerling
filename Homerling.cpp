#include <stdio.h>
#include <iostream>
#include "Materiales.h"
#include "ensamblaje.h"

using namespace std;

int main()
{

	Materiales i;
	Maker m;

	int llantas;
	int metal;
	int vehiculos;
	int opcion;
	bool salida = true;

	cout << "Bienvenido a la linea de ensamblaje de vehiculos Homerling ";

	cout << "\n";

	while (salida == true) {

		cout << "\n";
		cout << "\n";
		cout << "\n Cantidad de llantas: " << i.getLlantas() << " llantas.";
		cout << "\n Cantidad de kg de metal: " << i.getMetal() << " kg.";
		cout << "\n Robots encendidos(booleano): " << m.getEstatus();
		cout << "\n Temperatura de robots: " << m.getTemp() << " grados.";
		cout << "\n";
		cout << "\n 1~ Ensamblar vehiculo. ";
		cout << "\n 2~ Encender robots. ";
		cout << "\n 3~ Agregar llantas. ";
		cout << "\n 4~ Agregar kg de metal. ";
		cout << "\n 5~ Salir. ";
		cout << "\n";
		cout << "\n Introduce tu opcion: ";

		cin >> opcion;

		switch (opcion) 
		{
		case 1:
			cout << "\nCuantos vehiculos te gustaria ensamblar? ";
			cin >> vehiculos;
			metal = i.getMetal();
			llantas = i.getLlantas();
			vehiculos = m.ensamblarCarro(vehiculos, metal, llantas/*, i.ingBean, i.ingWater*/);
			m.ordenCompleta(vehiculos);
			break;

		case 2:
			m.Estatus();
			break;

		case 3:
			cout << "\nIntroducir cantidad de llantas: ";
			cin >> llantas;
			i.setLlantas(llantas);
			cout << endl;
			break;

		case 4:
			cout << "\nIntroducir kg de metal ";
			cin >> metal;
			i.setMetal(metal);
			cout << endl;
			break;

		case 5:
			cout << "\nGracias por usar nuestro sistema.";
			cout << "\nTenga un lindo dia!";
			cout << "\n";
			salida = false;
			break;

		default:
			cout << "\nOpcion incorrecta, intente de nuevo.";
			cin >> opcion;
			break;
		}

	}

	return 0;
}
