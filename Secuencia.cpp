#include <stdlib.h>
#include <string.h>
#include "Secuencia.h"

Secuencia::Secuencia(int largo){
	simbolos = "@#$%&";
	secuencia = new char[largo];
	for(int i = 0; i < largo; i++)
		secuencia[i] = simbolos[(rand() % 5)];
}

Secuencia::~Secuencia(){
    delete this;
}

int Secuencia::evaluarRespuesta(char* respuesta){
	int c = 0;
	for(int i = 0; i < strlen(secuencia); i++)
		if(respuesta[i] == secuencia[i])
			c++;
	return c;
}

int Secuencia::getLargoSecuencia(){
    return strlen(secuencia);
}

char* Secuencia::getSimbolos(){
    return simbolos;
}
