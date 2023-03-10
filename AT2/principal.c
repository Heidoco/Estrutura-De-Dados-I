#include "lista_simples.h"

int main(int argc, char const *argv[])
{

    NoLista* lista;
    printf("teste");
    lista = sllInsere(NULL,10);
    sllInsere(lista, 12312321);
    sllImprime(lista);

    return 0;
}
