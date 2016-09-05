#include <stdio.h>
/**
*@brief Toma un numero y lo asigna a la variable local x.
*@param x Recibe el valor ingresado.
*@return Devuelve el valor ingresado, para ser asignado a una variable en main.
*/
float ingreso ()
{
   float x;
   printf("Ingrese un numero: ");
   scanf("%f",&x);
   return x;
}
/**
*@brief Suma las variables x e y, devolviendo el resultado.
*@param x Primer variable a sumar, recibe el valor de la variable local de main "a".
*@param y Segunda variable a sumar, recibe el valor de la variable local de main "b".
*@return Devuelve el resultado obtenido.
*/
float sumar (float x, float y)
{
    float tot;
    tot=x+y;
    return tot;
}
/**
*@brief Resta las dos variables x e y, devolviendo el resultado.
*@param x Primer variable a restar, recibe el valor de la variable local de main "a".
*@param y Segunda variable a restar, recibe el valor de la variable local de main "b".
*@return Devuelve el resultado obtenido.
*/
float restar(float x, float y)
{
    float tot;
    tot=x-y;
    return tot;
}
/**
*@brief Multiplica las variables x e y, devolviendo el resultado.
*@param x Primer variable a multiplicar, recibe el valor de la variable local de main "a".
*@param y Segunda variable a multiplicar, recibe el valor de la variable local de main "b".
*@return Devuelve el resultado obtenido.
*/
float mult(float x, float y)
{
    float tot;
    tot=x*y;
    return tot;
}
/**
*@brief Divide las dos variables x e y, devolviendo el resultado.
*@param x Primer variable a dividir, recibe el valor de la variable "a" en main.
*@param y Segunda variable a dividir, recibe el valor de la variable "b" en main.
*@return Devuelve el resultado obtenido.
*/
float division(float x, float y)
{
    float tot;

    tot=x/y;
    return tot;
}
/**
*@brief Halla el factorial de la variable x
*@param x Variable a operar, recibe el valor de la variable local de main "a".
*@return Devuelve el resultado obtenido.
*/
float factorial(float x)
{
    float tot=x;
    int i=1;
    if(x==0)
    {
        tot=1;
        return tot;
    }
    else
    {

    for(i;i<x;i++)
       {
        tot=tot*i;
       }
    }

    return tot;
}






