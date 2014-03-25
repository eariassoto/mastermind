#include "Mastermind.h"
#include "Secuencia.h"
#include "Interfaz.h"


Mastermind::Mastermind(){
	interfaz = new Interfaz();
}

Mastermind::~Mastermind(){
	delete secuencia;
	delete interfaz;
}

int Mastermind::iniciarJuego(){
	char* nombre = new char[15];
	interfaz->imprimirMensaje("Mastermind");
	interfaz->imprimirMensaje("Version 0.1");
	interfaz->imprimirCambioLinea();
	
	nombre = interfaz->pedirHilera("Introduce tu nombre (max 15 caract): ",15);

	interfaz->imprimirHilera("Hola ");
	interfaz->imprimirHilera(nombre);
	secuencia = new Secuencia(interfaz->pedirEnteroRestriccion(", ingresa un numero entre 3 y 7: ",3,7));
		
	interfaz->imprimirCambioLinea();
	interfaz->imprimirHilera("He generado una secuencia de simbolos, estos se pueden repetir y son: ");
	interfaz->imprimirMensaje(secuencia->getSimbolos());
	
	char* respuesta = new char[secuencia->getLargoSecuencia()];
	
	while(true){
		for(int i = 0; i < secuencia->getLargoSecuencia(); i++)
			respuesta[i] = 'x';
		
		interfaz->imprimirCambioLinea();
		interfaz->imprimirHilera("Adivina mi secuencia, debe tener un largo de ");
		interfaz->imprimirNumero(secuencia->getLargoSecuencia());
		respuesta = interfaz->pedirHilera(" simbolos. Ingresa todos los simbolos pegados (escribe X para salir): ", secuencia->getLargoSecuencia());
		
		if(respuesta[0] == 'X' || respuesta[0] == 'x'){
			char r = interfaz->pedirCaracter("Estas seguro que deseas salir (escribe S): ");
			if(r == 'S' || r == 's')
				return 0;
		}else{
			int coincidencias = secuencia->evaluarRespuesta(respuesta);
			if(coincidencias == secuencia->getLargoSecuencia()){
				interfaz->imprimirCambioLinea();
				interfaz->imprimirHilera("Felicidades ");
				interfaz->imprimirHilera(nombre);
				interfaz->imprimirMensaje(", adivinastes la secuencia :D");
				return 0;
			}else{
				interfaz->imprimirHilera("Tienes ");
				interfaz->imprimirNumero(coincidencias);
				if(coincidencias == 1)
					interfaz->imprimirHilera(" simbolo ");
				else
					interfaz->imprimirHilera(" simbolos ");
				interfaz->imprimirMensaje("en la posicion correcta.");
			}
		}
	}
    return 0;
}
