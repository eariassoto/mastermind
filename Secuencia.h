#ifndef Secuencia_h
#define Secuencia_h


class Secuencia {

 public:
 
    Secuencia();
    ~Secuencia();
    int generarSecuencia(int);
    int evaluarRespuesta(char* respuesta);
	int getLargoSecuencia();
	char* getSimbolos();

 private:
 
    char * secuencia;
    char * simbolos;
    int * largoSecuencia;
};
#endif // Secuencia_h
