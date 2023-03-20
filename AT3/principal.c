#include "lista_simples.h"

int main(int argc, char const *argv[])
{

    NoLista* lista, *lista2;
    // lista = sllInsere(NULL,10);
    // lista = sllInsere(lista, 12);
    // lista = sllInsere(lista, 14);
    // lista = sllInsere(lista, 16);
    // lista = sllInsere(lista, 18);
    // lista = sllInsere(lista, 20);
    // sllImprime(lista);

    lista = sllInsere(NULL, 5);
    lista = sllInsere(lista, 3);
    lista = sllInsere(lista, 7);
    lista = sllInsere(lista, 2);
    lista = sllInsere(lista, 1);
    lista2 = sllInsere(NULL, 5);
    lista2 = sllInsere(lista2, 3);
    lista2 = sllInsere(lista2, 7);
    lista2 = sllInsere(lista2, 2);
    lista2 = sllInsere(lista2, 1);

    // testando sllImprime
    sllImprime(lista);

    // testando sllBusca
    sllBusca(lista, 5);

    // testando sllComprimento
    printf("O tamanho da lista é: %d\n", sllComprimento(lista));
    printf("O tamanho da lista é: %d\n", sllComprimentoRecursivo(lista));

    // testando sllUltimo
    node ultimo = sllUltimo(lista);
    printf("O último nó da lista contém o valor: %d\n", ultimo->info);

    if (sllIgual(lista, lista2)){
        printf("As listas são iguais\n");
    }else{
        printf("As listas são diferentes\n");
    }

    if (sllIgualRecursivo(lista, lista2)){
        printf("As listas são iguais\n");
    }else{
        printf("As listas são diferentes\n");
    }


    // testando sllRetira
    lista = sllRetira(lista, 5);
    sllImprime(lista);

    // testando sllInsereFim
    lista = sllInsereFim(lista, 5);
    lista = sllInsereFim(lista, 3);
    lista = sllInsereFim(lista, 7);
    sllImprime(lista);

    // testando sllIgual
    if (sllIgual(lista, lista2)){
        printf("As listas são iguais\n");
    }else{
        printf("As listas são diferentes\n");
    }
    if (sllIgualRecursivo(lista, lista2)){
        printf("As listas são iguais\n");
    }else{
        printf("As listas são diferentes\n");
    }

    sllImprimeRecursivo(lista);
    sllImprime(lista);

    printf("Remover o 5\n");
    sllRetiraRecursivo(lista,5);
    sllImprime(lista);
    printf("Comprimento da lista: %d\n",sllComprimento(lista));
    printf("Comprimento da lista: %d\n",sllComprimentoRecursivo(lista));


    sllLibera(lista);
    sllLibera(lista2);

    return 0;

}
