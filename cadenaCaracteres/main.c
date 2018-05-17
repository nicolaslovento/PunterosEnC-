#include <stdio.h>
#include <stdlib.h>

int main()
{   //dos punteros
    char nombre[20]="miNombre";
    char *apellido="miApellido";
    char *puntero;
    puntero=nombre;
    printf("\n%s",nombre);
    printf("\n%s",apellido);
    printf("\n%s",puntero);
    int i;
    for(i=0;i<20;i++)
    {
        if(*(apellido+i)!='\0')//mostrar contenido
        {
            printf("\n %c",*(apellido+i));//recorremos array de caracteres hasta encontrar un \0
        }
    }
    //bien hecho
    //Ejemplo para entender el concepto
    for(i=0;*(apellido+i)!='\0';i++)
    {


            printf("\n %c",*(apellido+i));//recorremos array de caracteres hasta encontrar un \0

    }

    printf("\n %s",apellido);

    return 0;
}
