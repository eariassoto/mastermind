#ifndef Interfaz_h
#define Interfaz_h


class Interfaz {

 public:

    void imprimirMensaje(char* mensaje);

    int pedirEnteroRestriccion(char* mensaje, int min, int max);

    char* pedirHilera(char* mensaje, int tamano);
    
    char pedirCaracter(char* mensaje);
    
    void imprimirHilera(char* mensaje);
    
    void imprimirCambioLinea();
    
    void imprimirNumero(int n);
};

#endif // Interfaz_h
