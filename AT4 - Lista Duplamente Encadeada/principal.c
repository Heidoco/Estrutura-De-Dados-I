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
    printf("\nBuscar 5 na lista: ");
    dllBusca(lista1, 5);

    printf("\nTamanho da lista: %d", dllComprimento(lista1));
    printf("\nRetirar 5 da lista");
    lista1 = dllRetira(lista1, 5);
    printf("\nTamanho da lista: %d\n", dllComprimento(lista1));
    dllImprime(lista1);
    printf("Retirar 3 da lista\n");
    lista1 = dllRetira(lista1, 3);
    dllImprime(lista1);

    printf("Tamanho da lista: %d\n", dllComprimento(lista1));


    dllInsereFim(lista1,23);
    dllImprime(lista1);
    printf("Ultimo: %d\n",dllUltimo(lista1)->info);

    // dllInsereFim(lista1,24);
    // lista1 = dllInsereFim(lista1,25);
    // lista1 = dllInsereFim(lista1,26);
    printf("Lista 1:\n");
    dllImprime(lista1);


    NoListaDupla *lista2 = NULL;
    lista2 = dllInsere(lista2,1);
    lista2 = dllInsere(lista2,2);
    lista2 = dllInsere(lista2,4);
    dllImprime(lista2);
    printf("Tamanho l1:%d\n", dllComprimento(lista1));
    printf("Tamanho l2:%d\n", dllComprimento(lista2));

    printf("Verificando igualdade entre: \n");
    dllImprime(lista1);
    dllImprime(lista2);
    printf("%d\n",dllIgual(lista1,lista2));
    dllInsereFim(lista2,23);

    printf("Verificando igualdade entre: \n");
    dllImprime(lista1);
    dllImprime(lista2);
    printf("%d\n",dllIgual(lista1,lista2));
    NoListaDupla *listamerged = dllMerge(lista1,lista2);
    printf("Unindo l1 com l2:\n");
    dllImprime(listamerged);
    dllLibera(&lista1);
    dllLibera(&lista2);
    printf("Tamanho l2:%d\n", dllComprimento(lista2));
    printf("%d", dllVazia(lista1));
    return 0;
}
