#include "lista_dupla.h"

int main(int argc, char const *argv[])
{
    NoListaDupla *lista1 = dllCria();
    printf("%d \n", dllVazia(lista1));
    printf("%d", dllComprimento(lista1));
        //printf("%d",dllUltimo(lista1)->info);

    lista1 = dllInsere(lista1, 1);
    dllImprime(lista1);
    printf("%d",dllUltimo(lista1)->info);
    lista1 = dllInsere(lista1, 2);
    lista1 = dllInsere(lista1, 3);
    lista1 = dllInsere(lista1, 4);
    lista1 = dllInsere(lista1, 5);
    printf("%d \n", dllVazia(lista1));
    dllImprime(lista1);
    printf("O ULTIMO VALOR É: %d\n",dllUltimo(lista1)->info);
    printf("Buscar 123 na lista: ");
    dllBusca(lista1, 123);
    printf("\nTamanho da lista: %d", dllComprimento(lista1));
    printf("\nRetirar 5 da lista");
    lista1 = dllRetira(lista1, 5);
    printf("\nTamanho da lista: %d\n", dllComprimento(lista1));
    dllImprime(lista1);
    printf("Retirar 3 da lista\n");
    lista1 = dllRetira(lista1, 3);
    dllImprime(lista1);

    printf("Tamanho da lista: %d\n", dllComprimento(lista1));
        printf("aaaaaa");

    dllInsereFim(lista1,23);
    dllImprime(lista1);
    printf("%d",dllUltimo(lista1)->info);

    dllInsereFim(lista1,2323);
    // lista1 = dllInsereFim(lista1,3223);
    // lista1 = dllInsereFim(lista1,24343);
    dllImprime(lista1);




    return 0;
}
