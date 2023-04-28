#include "arvoreb.h"

ArvoreB *insere(int v, ArvoreB *esq, ArvoreB *dir)
{
    ArvoreB *temp = (ArvoreB *)malloc(sizeof(ArvoreB));
    temp->info = v;
    temp->sae = esq;
    temp->sad = dir;
    return temp;
}

int vazia(ArvoreB *raiz)
{
    if (raiz == NULL)
    {
        return 1;
    }
    return 0;
}

int pertence(ArvoreB *raiz, int valor)
{
    if (raiz == NULL) return 0;
    return raiz->info == valor || pertence(raiz->sae, valor) || pertence(raiz->sad, valor);
}

int pares(ArvoreB *raiz)
{
    if (raiz == NULL) return 0;
    if (raiz->info%2 == 0) return 1 + pares(raiz->sae) + pares(raiz->sad);
    return pares(raiz->sae) + pares(raiz->sad);
}

int folhas(ArvoreB *raiz)
{
    if (raiz == NULL) return 0;
    if (raiz->sad == NULL && raiz->sae == NULL) return 1;
    return folhas(raiz->sae) + folhas(raiz->sad);
}

void imprimePre(ArvoreB *raiz)
{
    printf("<");
    if (raiz != NULL)
    {
        printf("%d", raiz->info);
        imprimePre(raiz->sae);
        imprimePre(raiz->sad);
    }
    printf(">");
}

void imprimeSim(ArvoreB *raiz)
{
    printf("<");
    if (raiz != NULL)
    {
        
        imprimeSim(raiz->sae);
        printf("%d", raiz->info);
        imprimeSim(raiz->sad);
    }
    printf(">");
}

void imprimePos(ArvoreB *raiz)
{
    printf("<");
    if (raiz != NULL)
    {
        
        imprimePos(raiz->sae);
        imprimePos(raiz->sad);
        printf("%d", raiz->info);
    }
    printf(">");
}

int numNos(ArvoreB *raiz)
{
    if (raiz != NULL)
    {
        return 1 + numNos(raiz->sae) + numNos(raiz->sad);
    }
    return 0;
}

int altura(ArvoreB *raiz)
{
    if (raiz == NULL)
    {
        return -1;
    }
    if (raiz->sad == NULL && raiz->sae == NULL)
    {
        return 0;
    }
    int altura_esquerda = 0;
    int altura_direita = 0;
    altura_esquerda = altura(raiz->sae);
    altura_direita = altura(raiz->sad);



}