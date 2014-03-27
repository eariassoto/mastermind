#ifndef Interfaz_h
#define Interfaz_h
/**
 * \class Interfaz
 *
 * \brief Se encarga de entrada y salidad de datos.
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
class Interfaz {

 public:

    /**\brief Imprime en consola un mensaje.
    * \param mensaje Hilera a imprimir.
    */
    void imprimirHilera(char* mensaje);
    
    /**\brief Imprime en consola un digito
    * \param mensaje Digito a imprimir
    */
    void imprimirNumero(int);
    
    /**\brief Pide un entero al usuario y lo valida.
    * \param mensaje Mensaje a imprimir.
    * \param min Rango minimo del digito (inclusive).
    * \param max Rango maximo del digito (inclusive).
    * \return digito ingresado por el usuario.
    */
    int pedirEnteroRestriccion(char* mensaje, int min, int max);
    
    /**\brief Pide una hilera al usuario.
    * \param mensaje Mensaje a imprimir.
    * \return Hileta ingresada por el usuario.
    */
    char* pedirHilera(char* mensaje);
    
    /**\brief Pide un caracter al usuario.
    * \param mensaje Mensaje a imprimir.
    * \return Caracter ingresado por el usuario.
    */
    char pedirCaracter(char* mensaje);
    
};
#endif // Interfaz_h
