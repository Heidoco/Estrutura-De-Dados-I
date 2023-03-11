#include "lista_simples.h"

int main(int argc, char const *argv[])
{

    NoLista* lista;
    lista = sllInsere(NULL,10);
    sllInsere(lista, 12);
    sllInsere(lista, 14);
    sllInsere(lista, 16);
    sllInsere(lista, 18);
    sllInsere(lista, 20);
    sllImprime(lista);

    sllBusca(lista,118);
    int x;
    x = sllComprimento(lista);
    printf("%d\n", x);
    sllUltimo(lista);
    return 0;
}
