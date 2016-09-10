#include <stdio.h>
#include <ctype.h>


/** \brief se utiliza para cargar datos en una variable por el usuario.
 *
 * \param
 * \param
 * \return devuelve el valor ingresado para ser asignado a una variable.
 *
 */


float ingresar()
{
    float num;
    printf("ingrese operando ; ");
    scanf("%f",&num);

    return num;
}
/** \brief Suma 2 numeros ingresados por el usario.
 *
 * \param Primer operando a sumar: num1.
 * \param Segundo operando a sumar: num2.
 * \return El resultado de la suma.
 *
 */

float sumar (float num1, float num2)
{
    float sumar1;
    sumar1=num1+num2;
    return sumar1;
}

/** \brief Resta 2 numeros ingresados por el usario.
 *
 * \param Primer operando a restar: num1.
 * \param Segundo operando a restar: num2.
 * \return El resultado de la resta.
 *
 */
float restar (float num1, float num2)
{
    float resta1;
    resta1=num1-num2;
    return resta1;


}

/** \brief Divide 2 numeros ingresados por el usario.
 *
 * \param Primer operando,el dividendo: num1.
 * \param Segundo operando,el divisor: num2.
 * \return el resultado de la division.
 *
 */

float division (float num1, float num2)
{
    float division1;

    if (num2 == 0 )
    {
        printf("Error \n");

    }
        else
        {
        division1 = num1/num2;
        printf("La division da: %f \n",division1);
        }

    return division1;
}

/** \brief Multiplica 2 numeros ingresados por el usario.
 *
 * \param Primer operando a multiplicar: num1.
 * \param Segundo operando a multiplicar: num2.
 * \return Resultado de la multiplicacion.
 *
 */

float multiplicacion(float num1, float num2)
{
    float multiplicacion1;
    multiplicacion1=num1*num2;
    return multiplicacion1;
}

/** \brief Realiza factorial de un numero ingresado por el usario.
 *
 * \param Operando para realizar factorial: n.
 * \param
 * \return Resultado factorial.
 *
 */

int factorial(int n)
{
int i, fact=1;

        if(n<0)
        {
        printf("Error.No se puede realizar esta operacion \n");



        }

        else
        {
            for(i=1;i<=n;i++)
            {
            fact=fact*i;
            }
            printf("El factorial de %d es: %d \n",n,fact);
        }

        if(n==0)
        {
        fact=1;
        printf("el factorial es: %d \n",fact);
        }

return fact;
}


/** \brief Realiza suma, resta, division, multiplicacion, factorial.
 *
 * \param Primer operando: n1.
 * \param Segundo operando: n2.
 * \return muestra en pantalla todas las operaciones realizadas.
 *
 */

void totaloperaciones(float n1,float n2)
{
    printf("El resultado de la Suma es: %f \n",sumar(n1,n2));
    printf("El resultado de la resta es: %f \n", restar(n1,n2));
    printf("%f \n",division(n1,n2));
    printf("El resultado de la multiplicacion es: %f \n",multiplicacion(n1,n2));
    printf("%d \n",factorial(n1));




}
