#include <stdio.h>
#include <stdlib.h>

void cargarArray(int*,int);
void MostrarArray(int*,int);
int main()
{
    int vector[3];
    int* puntero;
    puntero=vector;

    printf("%d\n",vector);
    printf("%d\n",&vector);
    printf("%d\n",&vector[0]);//son equivalentes

    cargarArray(vector,3);
    MostrarArray(vector,3);


    return 0;
}
void cargarArray(int* puntero,int tam)
{
   int i;
    //obtenemos valor
    for(i=0;i<tam;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",puntero+i); // le suma 4 bites ya que es entero.

    }
}

void MostrarArray(int* puntero,int tam)
{
     int i;
     //mostramos valor
    for(i=0;i<tam;i++)
    {
        printf("%d\n",*(puntero+i));
    }
}
