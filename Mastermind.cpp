#include "Mastermind.h"
#include "Secuencia.h"
#include "Interfaz.h"
#include <string.h>

Mastermind::Mastermind(){
	interfaz = new Interfaz();
}

Mastermind::~Mastermind(){
	delete this;
}

int Mastermind::iniciarJuego(){
	char* nombre = new char[15];
	interfaz->imprimirHilera("Mastermind\nVersion 0.1\n");
	
	strcpy(nombre, interfaz->pedirHilera("Introduce tu nombre: "));

	interfaz->imprimirHilera("Hola ");
	interfaz->imprimirHilera(nombre);
	secuencia = new Secuencia(interfaz->pedirEnteroRestriccion(", ingresa un numero entre 3 y 7: ",3,7));
		
	interfaz->imprimirHilera("He generado una secuencia de simbolos, estos se pueden repetir y son: ");
	interfaz->imprimirHilera(secuencia->getSimbolos());
	
	char* respuesta = new char[secuencia->getLargoSecuencia()];
	
	while(true){
		for(int i = 0; i < secuencia->getLargoSecuencia(); i++)
			respuesta[i] = 'x';
		
		interfaz->imprimirHilera("\nAdivina mi secuencia, debe tener un largo de ");
		interfaz->imprimirNumero(secuencia->getLargoSecuencia());
		respuesta = interfaz->pedirHilera(" simbolos. Ingresa todos los simbolos pegados (escribe X para salir): ");
		
		if(respuesta[0] == 'X' || respuesta[0] == 'x'){
			char r = interfaz->pedirCaracter("Estas seguro que deseas salir (escribe S): ");
			if(r == 'S' || r == 's')
				return 0;
		}else{
			int coincidencias = secuencia->evaluarRespuesta(respuesta);
			if(coincidencias == secuencia->getLargoSecuencia()){
				interfaz->imprimirHilera("Felicidades ");
				interfaz->imprimirHilera(nombre);
				interfaz->imprimirHilera(", adivinastes la secuencia :D\n");
				return 0;
			}else{
				interfaz->imprimirHilera("Tienes ");
				interfaz->imprimirNumero(coincidencias);
				if(coincidencias == 1)
					interfaz->imprimirHilera(" simbolo ");
				else
					interfaz->imprimirHilera(" simbolos ");
				interfaz->imprimirHilera("en la posicion correcta.\n");
			}
		}
	}
    return 0;
}
