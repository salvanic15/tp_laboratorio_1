/**
 *@author Guillermo Palmeri 1B
 *@date 28/08/2016, 08/09/2016
*/
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

/**\brief Calculadora basica.
 *Realiza las operaciones basicas (+,-,*,/) mas factorial, teniendo en cuenta errores matematicos.
 */

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

        while(opcion<1||opcion>9)
        {
            printf("Error, debe ingresar una de las opciones del menu\n");
            system("pause");
            system("cls");
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
        }


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
                printf("La suma entre %f y %f es %f \n",a,b,sumar(a,b));
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
                    printf("Error matematico al dividir por 0\n\a");
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
                if(a==0||b==0)// Se usa, especialmente, para evitar que la multiplicación entre 0 y un negativo, de como resultado "-0" /
                  {
                   printf("El producto entre %f y %f es 0.000000 \n",a,b);
                   system("pause");
                   system("cls");
                  }
                  else
                  {
                    printf("El producto entre %f y %f es %f \n",a,b, mult(a,b));
                    system("pause");
                    system("cls");
                  }
                break;
            case 7:
                factorial(a);
                break;
            case 8:
                system("cls");

                printf("La suma entre %f y %f es %f \n",a,b,sumar(a,b));

                printf("La resta entre %f y %f es %f \n",a,b,restar(a,b));

                if(b==0)
                {
                    printf("Error matematico al dividir por 0\n\a");
                    system("pause");
                }
                else
                    {
                      printf("El cociente entre %f y %f es %f \n",a,b, division(a,b));
                    }

               if(a==0||b==0)
                  {
                   printf("El producto entre %f y %f es 0.000000 \n",a,b);
                  }
                  else
                  {
                    printf("El producto entre %f y %f es %f \n",a,b, mult(a,b));
                  }

                factorial(a);
                break;
            case 9:
                seguir = 'n';
                printf("Hasta luego!");
                break;
        }

     }


    return 0;

}
