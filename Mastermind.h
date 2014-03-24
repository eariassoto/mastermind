#ifndef Mastermind_h
#define Mastermind_h

#include "Interfaz.h"
#include "Secuencia.h"


class Mastermind {

 public:

    Mastermind();
    ~Mastermind();
	int iniciarJuego();

 private:
 
    Secuencia * secuencia;
    Interfaz * interfaz;
};

#endif // Mastermind_h
