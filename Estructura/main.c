#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int a;
    char b;
}dato;


int main()
{
    dato d;
    d.a=5;
    d.b='<';

    dato* pDato;
    pDato=&d;

    //el * accede al valor. Las estructuras siempre son compuestas
    printf("%d --%c",(*pDato).a,(*pDato).b);//Así accedo a los valores de la estructura
    //printf("%d --%c",pDato.a,pDato.b);//ERROR
    //printf("%d ",&d);//direccion de memoria

    //printf("%d---%d",&d,&(d.a));//coincide ya que es donde empieza la estructura

    //printf("TAM: %d\n",sizeof(dato));
    //printf("%d--%c",d.a,d.b);
    return 0;
}
