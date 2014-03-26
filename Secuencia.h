#ifndef Secuencia_h
#define Secuencia_h

/** \brief hola que ase
*/
class Secuencia {

 public:
 
    Secuencia(int);
    ~Secuencia();
    
    /**\brieh holis
    * \param respuesta hfshdjghk
    */
    int evaluarRespuesta(char* respuesta);
	int getLargoSecuencia();
	char* getSimbolos();

 private:
 
    int largoSecuencia;
    char * secuencia;
    char * simbolos;
};
#endif // Secuencia_h
