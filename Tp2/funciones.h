#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


typedef struct{

    char nombre[50];
    int edad;
    int estado;
    char dni[10];

}Epersona;

int Espaciolibre(Epersona[], int);

void ingresarnombre(Epersona[],int);

void borrarpersona(Epersona[],int);

void ordenamiento(Epersona[],int);

void grafico(Epersona[],int);


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
//int obtenerEspacioLibre(EPersona lista[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
//int buscarPorDni(EPersona lista[], int dni);

#endif // FUNCIONES_H_INCLUDED
