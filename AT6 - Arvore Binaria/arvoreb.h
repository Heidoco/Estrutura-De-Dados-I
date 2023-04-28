#include <stdio.h>
#include <stdlib.h>

struct ArvoreB
{
    int info;
    struct ArvoreB *sae;
    struct ArvoreB *sad;
    struct Arvoreb *raiz;
};

typedef struct ArvoreB ArvoreB;

ArvoreB *insere(int v, ArvoreB *esq, ArvoreB *dir);
int vazia(ArvoreB *raiz);

const char *toString(ArvoreB *raiz);

int pertence(ArvoreB *raiz, int valor);
int pares(ArvoreB *raiz);
int folhas(ArvoreB *raiz);
void imprimePre(ArvoreB *raiz);
void imprimeSim(ArvoreB *raiz);
void imprimePos(ArvoreB *raiz);
int numNos(ArvoreB *raiz);
int altura(ArvoreB *raiz);
int igual(ArvoreB *raiz1, ArvoreB *raiz2);