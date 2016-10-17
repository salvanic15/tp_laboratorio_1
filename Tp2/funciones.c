#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ctype.h"
#include "funciones.h"


/** \brief Se utiliza para buscar espacios vacios dentro de mi array de estructura.
 *
 * \param Mi estructura: Epersona.
 * \param Cantidad de elementos.
 * \return retorna el indice libre.
 *
 */

int Espaciolibre(Epersona local[], int MAX)
{   int i;

    for(i=0;i<=MAX;i++)
    {
        if(local[i].estado==0)
        {
            break;
        }
    if(i==MAX)
        {
            printf("No hay espacio libre para cargar otra persona...");
        system("pause");
        return -1;}
    }
return i;}

/** \brief se utiliza para cargar datos en variables por el usuario.
 *
 * \param Mi estructura: Epersona.
 * \param Cantidad de elementos.
 * \return devuelve datos cargados por el usario: Nombre,Edad,Dni.
 *
 */

void ingresarnombre(Epersona local[],int cant)
{
                printf("ingrese Nombre: ");
                fflush(stdin);
                gets(local[cant].nombre);
                strlwr(local[cant].nombre);
                local[cant].nombre[0]=toupper(local[cant].nombre[0]);

                printf("ingrese Edad: ");
                scanf("%d",&local[cant].edad);
                printf("ingrese Dni: ");
                fflush(stdin);
                gets(local[cant].dni);

                while(strlen(local[cant].dni)<6 || strlen(local[cant].dni)>9)
                {
                    printf("Error, Ingrese nuevamente DNI: ");
                    fflush(stdin);
                    gets(local[cant].dni);
                }
                local[cant].estado=1;
}


/** \brief Su funcion es buscar y borrar usarios.
 *
 * \param Mi estructura: Epersona.
 * \param Cantidad de elementos.
 * \return devuelve espacios vacios para ingresar usarios.
 *
 */
void borrarpersona(Epersona local[],int cant)
{   int i;

    char confirmar,aux[50];

    printf("Ingrese DNI a borrar: ");
    fflush(stdin);
    gets(aux);

    for(i=0;i<cant;i++)
    {   if(strcmp(aux,local[i].dni)==0)
        {
            printf("%s \n",local[i].nombre);
            printf("Confirme si quiere borrar s/n: ");
            scanf("%c",&confirmar);
            if(confirmar=='s')
            {
                local[i].estado=0;
                local[i].dni[0]='\0';
                local[i].edad=0;
                local[i].nombre[0]='\0';
                printf("Los cambios se guardaron \n");
                break;

            }
                else
                {
                printf("No se han guardado los cambios \n");
                }


        }

    }
     if(i==cant)
                {
                system("cls");
                printf("No se encontro usario \n");
                system("pause");
                system("cls");
                }


}


/** \brief Muestra datos todos los usarios ordenados alfabeticamente.
 *
 * \param Mi estructura: Epersona.
 * \param Cantidad de elementos.
 * \return Printea en pantalla datos cargados.
 *
 */
void ordenamiento(Epersona local[],int cant)
{
int i,j;
Epersona aux;
for(i=0;i<cant-1;i++)
{

for(j=i+1;j<cant;j++)
if(strcmp(local[i].nombre,local[j].nombre)>0)
{
   aux=local[i];
   local[i]=local[j];
   local[j]=aux;
}
}

 for (i = 0 ; i < cant;i++)
    {
        if (local[i].estado == 1)
        {
        printf("%s\t%d\t%s\n", local[i].nombre,local[i].edad,local[i].dni);
        }
    }
    system("pause");
    system("cls");
}


/** \brief Muestra grafico con edades de usarios cargadas segun un criterio establecido.
 *
 * \param Mi estructura: Epersona.
 * \param Cantidad de elementos.
 * \return
 *
 */
void grafico(Epersona local[],int cant)
{   int i,menorde18=0,mayoresde19a35=0,mayorde35=0,mayor,flag=0;

    for(i=0;i<cant;i++)
    {
        if(local[i].estado==1)
        {

            if(local[i].edad<=18)
            {
            menorde18++;
            }
            else if(local[i].edad>=19 && local[i].edad<=35)
            {
                mayoresde19a35++;
            }
            else
            {
                mayorde35++;
            }


        }

    }

        if(menorde18 >= mayoresde19a35 && menorde18 >= mayorde35)
        {
        mayor = menorde18;
        }
        else
        {
            if(mayoresde19a35 >= menorde18 && mayoresde19a35 >= mayorde35)
            {
            mayor = mayoresde19a35;
            }
            else{
            mayor = mayorde35;
            }
        }

        for(i=mayor; i>0; i--)
        {
        if(i<10){
            printf("%02d|",i);
        }
        else
            printf("%02d|",i);

        if(i<= menorde18){
            printf("*");
        }
        if(i<= mayoresde19a35){
            flag=1;
            printf("\t*");
        }
        if(i<= mayorde35){
            if(flag==0)
                printf("\t\t*");
            if(flag==1)
                printf("\t*");

        }


        printf("\n");
    }
    printf("--+-----------------");
    printf("\n  |<18\t19-35\t>35");
    printf("\n   %d\t%d\t%d \n", menorde18, mayoresde19a35, mayorde35);

system("pause");
system("cls");

}

