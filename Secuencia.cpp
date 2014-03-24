#include <stdlib.h>
#include <string.h>
#include "Secuencia.h"

Secuencia::Secuencia(){
	largoSecuencia = new int;
	simbolos = "@#$%&";
}

Secuencia::~Secuencia(){
    delete [] secuencia;
    delete [] simbolos;
    delete largoSecuencia;
}

int Secuencia::generarSecuencia(int largo){
	*largoSecuencia = largo;
	secuencia = new char[largo];
	for(int i = 0; i < largo; i++)
		secuencia[i] = simbolos[(rand() % 5)];
    return 0;
}

int Secuencia::evaluarRespuesta(char* respuesta){
	int c = 0;
	for(int i = 0; i < strlen(secuencia); i++)
		if(respuesta[i] == secuencia[i])
			c++; //lol
	return c;
    return 0;
}

int Secuencia::getLargoSecuencia(){
    return *largoSecuencia;
}

char* Secuencia::getSimbolos(){
    return simbolos;
}
