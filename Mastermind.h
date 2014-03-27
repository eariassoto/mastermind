#ifndef Mastermind_h
#define Mastermind_h

#include "Interfaz.h"
#include "Secuencia.h"
/**
 * \class Mastermind
 *
 * \brief Controla el juego.
 *
 * \author Emmanuel Arias Soto B30640
 *
 * \version 0.1
 *
 * \date 2014/03/27 
 *
 * emmanuel1412@gmail.com
 *
 */

class Mastermind {

 public:

    Mastermind();
    ~Mastermind();
    
    /**\brief Inicia el juego.
    * \return 0 para el main()
    */
	int iniciarJuego();

 private:
 
    Secuencia * secuencia; ///Instancia de la clase Secuencia.
    Interfaz * interfaz; ///Instancia de la clase Interfaz.
};

#endif // Mastermind_h
