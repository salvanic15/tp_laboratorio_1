#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float a=0;
    float b=0;

    printf("Bienvenido!\n");
    system("pause");
    system("cls");

       while(seguir=='s')
    {
        printf("1- Ingresar 1er operando: A=%f\n",a);
        printf("2- Ingresar 2do operando: B=%f\n",b);
        printf("3- Calcular la suma \n");
        printf("4- Calcular la resta \n");
        printf("5- Calcular la division \n");
        printf("6- Calcular la multiplicacion \n");
        printf("7- Calcular el factorial \n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);
        system("cls");


        switch(opcion)
        {
            case 1:
                a=ingreso();
                system("cls");
                break;
            case 2:
                b=ingreso();
                system("cls");
                break;
            case 3:
                system("cls");
                printf("La suma entre %f y %f es %f \n\a",a,b,sumar(a,b));
                system("pause");
                system("cls");
                break;
            case 4:
                system("cls");
                printf("La resta entre %f y %f es %f \n",a,b,restar(a,b));
                system("pause");
                system("cls;");
                break;
            case 5:
                system("cls");
                if(b==0)
                {
                    printf("Error matematico al dividir\n\a");
                    system("pause");
                    system("cls");
                    break;
                }
                else
                    {
                      printf("El cociente entre %f y %f es %f \n",a,b,division(a,b));
                      system("pause");
                      system("cls");
                      break;
                    }
            case 6:
                system("cls");
                printf("El producto entre %f y %f es %f \n",a,b, mult(a,b));
                system("pause");
                system("cls");
                break;
            case 7:
                if(a<0)
                {
                    printf("Error al intentar hallar el factorial de numero negativo\n\a");
                    system("pause");
                    system("cls");
                }
                else
                    {
                     system("cls");
                     printf("El factorial de %f es %f \n", a, factorial(a));
                     system("pause");
                     system("cls");
                    }
                break;
            case 8:
                system("cls");
                printf("La suma entre %f y %f es %f \n",a,b,sumar(a,b));
                printf("La resta entre %f y %f es %f \n",a,b,restar(a,b));
                if(b==0)
                {
                    printf("Error matematico al dividir\n\a");
                    system("pause");
                }
                else
                    {
                      printf("El cociente entre %f y %f es %f \n",a,b, division(a,b));
                    }
                printf("El producto entre %f y %f es %f \n",a,b, mult(a,b));
                if(a<0)
                {
                    printf("Error al intentar hallar el factorial de numero negativo\n\a");
                }
                else
                {
                    printf("El factorial de %f es %f \n", a, factorial(a));
                }
                system("pause");
                system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }

     }


    return 0;

}
