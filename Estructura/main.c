#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int a;
    char b;
}dato;


int main()
{
    dato l[2]={{1,'a'},{1,'b'}};
    dato* pLista;
    pLista=l;//direccion de memoria del primer elemento
    int i;
    //OPERADOR FLECHA
    printf("%d--%c\n",pLista->a,pLista->b);
    printf("%d--%c\n",(pLista+i)->a,(pLista+i)->b);





    //ejemplo1
    /*int i;

    for(i=0;i<2;i++)
    {

        printf("%d--%c\n",(*(pLista+i)).a,(*(pLista+i)).b);
    }
*/

















    /*dato d;
    d.a=5;
    d.b='<';

    dato* pDato;
    pDato=&d;
    printf("%d --%c",(*pDato).a,(*pDato).b);*/
    return 0;
}
