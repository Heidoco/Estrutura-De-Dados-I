#include "lista_simples.h"

int main(int argc, char const *argv[])
{

    NoLista* lista;
    lista = sllInsere(NULL,10);
    lista = sllInsere(lista, 12);
    lista = sllInsere(lista, 14);
    lista = sllInsere(lista, 16);
    lista = sllInsere(lista, 18);
    lista = sllInsere(lista, 20);
    sllImprime(lista);

    // sllBusca(lista,118);
    // int x;
    // x = sllComprimento(lista);
    // printf("%d\n", x);
    // sllUltimo(lista);

    // sllRetira(lista,20);
    // sllImprime(lista);
    // x = sllComprimento(lista);
    // printf("%d\n", x);
    // sllLibera(lista);
    //printf("%d",sllVazia(lista));
    //sllImprime(lista);
    return 0;

}
