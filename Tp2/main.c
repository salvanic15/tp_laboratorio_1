#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX 20


int main()
{

    char seguir='s';
    int i,opcion=0,posicion;

    Epersona usario[MAX];

    //Inicializa mis variables
    for(i=0;i<MAX;i++)
    {
      usario[i].estado=0;

      usario[i].edad=0;
    usario[i].nombre[0]='\0';
    }

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                system("cls");
                posicion=Espaciolibre( usario,MAX);
                if(posicion>=0 && posicion<MAX)
                {
                ingresarnombre(usario,posicion);

                }
                system("cls");
                break;
            case 2:

                borrarpersona(usario,MAX);


                break;
            case 3:
                ordenamiento(usario,MAX);

                break;

            case 4:
                system("cls");
                grafico(usario,MAX);

                break;
            case 5:
                seguir = 'n';
                break;
            default:
                system("cls");
                printf("Opcion incorrecta....Ingrese los numeros en pantalla \n");
                system("pause");
                system("cls");
                break;
        }
    }

    return 0;
}
