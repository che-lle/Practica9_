/* Yañez Perez Michelle
   ejercicio 5
   Calculadora */

#include <stdio.h>

float suma(float num1, float num2);
float resta(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

int main()
{
    int elec = 0;
    float n1, n2, res = 0;

    do
    {
        printf("Escoge una operacion:\n");
        printf("1 - Suma\n");
        printf("2 - Resta\n");
        printf("3 - Multiplicacion\n");
        printf("4 - Division\n");
        printf("Elige: ");
        scanf("%i", &elec);
    }
    while (elec < 1 || elec > 4);

    printf("Dame la primera cifra: ");
    scanf("%f", &n1);
    printf("Dame la segunda cifra: ");
    scanf("%f", &n2);

    switch (elec)
    {
        case 1:
            res = suma(n1, n2);
            printf("El resultado de la suma es: %.2f\n", res);
            break;
        case 2:
            res = resta(n1, n2);
            printf("El resultado de la resta es: %.2f\n", res);
            break;
        case 3:
            res = mult(n1, n2);
            printf("El resultado de la multiplicacion es: %.2f\n", res);
            break;
        case 4:
            if (n2 == 0)
            {
                printf("Error: no se puede dividir entre cero.\n");
            }
            else
            {
                res = div(n1, n2);
                printf("El resultado de la division es: %.2f\n", res);
            }
            break;
        default:
            printf("Opcion no valida.\n");
            break;
    }

    return 0;
}

float suma(float num1, float num2)
{
    return num1 + num2;
}

float resta(float num1, float num2)
{
    return num1 - num2;
}

float mult(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2)
{
    return num1 / num2;
}
