#include <iostream>
#include "Interfaz.h"

using namespace std;

void Interfaz::imprimirMensaje(char* mensaje){
    cout << mensaje << endl;
}

void Interfaz::imprimirHilera(char* mensaje){
    cout << mensaje;
}

void Interfaz::imprimirNumero(int n){
    cout << n;
}

void Interfaz::imprimirCambioLinea(){
    cout << endl;
}

int Interfaz::pedirEnteroRestriccion(char* mensaje, int min, int max){
	int *n = new int;
	cout << mensaje;
	cin >> *n;
	if(*n < min || *n > max)
		do{
			cout << "El numero que digitastes no es correcto. Por favor intenta de nuevo: ";
			cin >> *n;
		}while(*n < min || *n > min);
    return *n;
}

char* Interfaz::pedirHilera(char* mensaje, int tamano){
	char *msj = new char[tamano];
	cout << mensaje;
	cin >> msj;
    return msj;
}

char Interfaz::pedirCaracter(char* mensaje){
	char c = 'a';
	cout << mensaje;
	cin >> c;
    return c;
}
