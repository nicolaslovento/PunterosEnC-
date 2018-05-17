#include <stdio.h>
#include <stdlib.h>

int main()
{
    //punteros: son direcciones donde se encuentra el dato. Necdesito saber donde empieza el dato guardado
    int *punteroNumero;
    int numero;
    int numeroDos;

    numero=66;
    punteroNumero=&numero;
    numeroDos=&numero;
    //*punteroNumero=&numero; MAL
    //*punteroNumero=55; MAL

    printf("\nAsignacion de valor a- %d",numeroDos);
    printf("\n%p",&numero);
    printf("\n%p",punteroNumero);
    printf("\n%d",*punteroNumero);
    //printf("%d",*punteroNumero);
    return 0;
}
