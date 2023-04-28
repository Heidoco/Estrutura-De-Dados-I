#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ArvoreBin
{
    int info;
    struct ArvoreBin *sae;
    struct ArvoreBin *sad;
};

typedef struct ArvoreBin ArvoreBin;

ArvoreBin *insere(int v, ArvoreBin *esq, ArvoreBin *dir);
int vazia(ArvoreBin *raiz);

char *toString(ArvoreBin *raiz);

int pertence(ArvoreBin *raiz, int valor);
int pares(ArvoreBin *raiz);
int folhas(ArvoreBin *raiz);
void imprimePre(ArvoreBin *raiz);
void imprimeSim(ArvoreBin *raiz);
void imprimePos(ArvoreBin *raiz);
int numNos(ArvoreBin *raiz);
int altura(ArvoreBin *raiz);
int igual(ArvoreBin *raiz1, ArvoreBin *raiz2);