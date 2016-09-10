#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include <ctype.h>

int main()
{
    char seguir='s';
    int opcion=0;
    float A=0, B=0,suma,resta,multiplicar;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n",A);
        printf("2- Ingresar 2do operando (B=%.2f)\n",B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones \n");
        printf("9- Salir\n");

        scanf("%d",&opcion);



        switch(opcion)
        {
            case 1:
                system("cls");
                A=ingresar();
                break;

            case 2:
                system("cls");
                B=ingresar();
                break;


            case 3:

                suma=sumar(A,B);
                printf("La suma da: %f \n",suma);
                system("pause");
                system("cls");

                break;

            case 4:
                system("cls");
                resta=restar(A,B);
                printf("La resta da: %f \n",resta);
                system("pause");
                system("cls");
                break;

            case 5:
                system("cls");
                division(A,B);
                system("pause");
                system("cls");
                break;

            case 6:
                system("cls");
                multiplicar=multiplicacion(A,B);
                printf("La multiplicacion da: %f \n",multiplicar);
                system("pause");
                system("cls");

                break;
            case 7:
                system("cls");

           factorial(A);


                system("pause");
                system("cls");
                break;
            case 8:
                system("cls");
                totaloperaciones(A,B);
                system("pause");
                system("cls");



                break;
            case 9:
                seguir = 'n';
                break;



        }//fin switch

        }//fin while


return 0;
}

