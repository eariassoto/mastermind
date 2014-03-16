#ifndef Mastermind_h
#define Mastermind_h

#include "Interfaz.h"
#include "Secuencia.h"


class Mastermind {

 public:

    Mastermind();
	int iniciarJuego();
    ~Mastermind();

  


 private:
    Secuencia * secuencia;
    Interfaz * interfaz;
};

#endif // Mastermind_h
