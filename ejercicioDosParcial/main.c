#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAM 100


/*
    Crear una función que se llame contarCaracteres
    que reciba una cadena de caracteres como primer parámetro y un carácter como segundo
    y devuelva la cantidad de veces que ese carácter aparece en la cadena

*/

int contarCaracteres(char cadena[],char caracter);
int main()
{
    char cadena[TAM];
    int respuesta;
    char caracter = 'e';

    printf("Ingrese una palabra: ");
    fflush(stdin);
    gets(cadena);
    respuesta = contarCaracteres(cadena,caracter);
    printf("\n\nContador de ocurrencias %d",respuesta);

    return 0;
}
int contarCaracteres(char cadena[],char caracter)
{
    int contador = 0;
    int longitud = strlen(cadena);
    int i;
    char aux;

    for(i = 0; i < longitud; i++)
    {
       aux = cadena[i];
       if(aux == caracter)
       {
           contador++;
       }
    }
    return contador;
}

