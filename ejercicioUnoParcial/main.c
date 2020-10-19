#include <stdio.h>
#include <stdlib.h>


/*

1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto
y devuelva el valor del producto con un descuento del 5%. Realizar la llamada desde el main.

*/
float aplicarDescuento(int precio, int porcentaje);
int main()
{
    int precioInicial;
    float precioFinal;

    printf("Ingrese el precio para calcular el descuento: ");
    scanf("%d",&precioInicial);

    precioFinal = aplicarDescuento(precioInicial, 5);
    printf("%.2f",precioFinal);


    return 0;
}
float aplicarDescuento(int precio, int porcentaje)
{
    float descuento;

    descuento = precio * porcentaje;
    descuento = precio - (float)(descuento / 100);


    return descuento;
}
