#include <stdio.h>
#include <stdlib.h>

void mostrar(int *puntero,int cantidad);

int main()
{
    int numeros[3];
    int *puntero;//es una direccion de memoria
    int aux=333;
    puntero=numeros;
    numeros[0]=9;
    numeros[1]=99;
    numeros[2]=999;//guardado consecutivo en la memoria
    printf("\n puntero: %d",*puntero);
    printf("\n puntero: %d",*puntero+1);
    printf("\n puntero: %d",*puntero+2);
    printf("\n puntero: %d",*puntero+3);
    printf("\n puntero: %d",numeros);
    //mostrar(numeros,3);

    return 0;
}

void mostrar(int *puntero,int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\n numero: %d",*(puntero+i));//salto de memoria con el tipo de dato que le damos
    }

}
