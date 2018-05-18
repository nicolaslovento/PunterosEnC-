#include <stdio.h>
#include <stdlib.h>

int cargarArray(int*,int);
void MostrarArray(int*,int);
int main()
{
    int vector[3];

    if(cargarArray(vector,3))//espera un valor booleano(si es 0 es falso)
    {
        printf("Carga exitosa");
    }else
    {
        printf("Error al cargar datos");
    }



    return 0;
}
int cargarArray(int* puntero,int tam)
{
   int i;
   int retorno=0;
    //es 0 si es null el vector
    if(puntero!=NULL)
    {
        retorno=1;//es uno si esta cargardo
        for(i=0;i<tam;i++)
        {
        printf("Ingrese un numero: ");
        scanf("%d",puntero+i); // le suma 4 bites ya que es entero.

        }
    }
    return retorno;
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
