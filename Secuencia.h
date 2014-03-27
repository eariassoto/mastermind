#ifndef Secuencia_h
#define Secuencia_h

/**
 * \class Secuencia
 *
 * \brief Se encarga de crear la secuencia de simbolos y evaluar la respuesta del usuario.
 *
 * \author Emmanuel Arias Soto B30640
 *
 * \version 0.1
 *
 * \date 2014/03/26 
 *
 * emmanuel1412@gmail.com
 *
 */
class Secuencia {

 public:
 
    /** \brief Constructor, crea la secuencia.
    * \param largo Largo de la secuencia elegida por el usuario.
    */
    Secuencia(int largo);
    
    ~Secuencia();
    
    /**\brief Compara la respuesta del usuario con la secuencia se ha creado.
    * \param respuesta Secuencia de caracteres ingresada por el usuario
    / \return Cantidad de símbolos en la posicion correcta.
    */
    int evaluarRespuesta(char* respuesta);
    
    /**
    * \return Largo de la secuencia generada por el programa.
    */
	int getLargoSecuencia();
	
	/**
	* \return Lista de simbolos que uso el programa para generar la secuencia.
	*/
	char* getSimbolos();


 private:
 
    char * secuencia; ///Secuencia de simbolos aleatorios que el usuario debera adivinar.
    char * simbolos; ///Simbolos utilizados para generar la secuencia.
};
#endif // Secuencia_h
