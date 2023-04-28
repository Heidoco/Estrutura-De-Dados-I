#include "arvorebin.h"

ArvoreBin *insere(int v, ArvoreBin *esq, ArvoreBin *dir)
{
    ArvoreBin *temp = (ArvoreBin *)malloc(sizeof(ArvoreBin));
    temp->info = v;
    temp->sae = esq;
    temp->sad = dir;
    return temp;
}

char* toString(ArvoreBin *raiz)
{
    char* string = malloc(sizeof(char) * 100); // Allocate initial memory for string
    
    if (string != NULL) // Check if memory allocation was successful
    {
        strcpy(string, "<"); // Initialize string with opening angle bracket
        
        if (raiz != NULL)
        {
            char* temp = malloc(sizeof(char) * 10);
            sprintf(temp, "%d", raiz->info);
            
            strcat(string, temp);
            free(temp);
            
            char* left = toString(raiz->sae); 
            strcat(string, left); 
            free(left); 
            
            char* right = toString(raiz->sad); 
            strcat(string, right);
            free(right);
        }
        
        strcat(string, ">");
    }
    return string;
}


int vazia(ArvoreBin *raiz)
{
    if (raiz == NULL)
    {
        return 1;
    }
    return 0;
}

int pertence(ArvoreBin *raiz, int valor)
{
    if (raiz == NULL) return 0;
    return raiz->info == valor || pertence(raiz->sae, valor) || pertence(raiz->sad, valor);
}

int pares(ArvoreBin *raiz)
{
    if (raiz == NULL) return 0;
    if (raiz->info%2 == 0) return 1 + pares(raiz->sae) + pares(raiz->sad);
    return pares(raiz->sae) + pares(raiz->sad);
}

int folhas(ArvoreBin *raiz)
{
    if (raiz == NULL) return 0;
    if (raiz->sad == NULL && raiz->sae == NULL) return 1;
    return folhas(raiz->sae) + folhas(raiz->sad);
}

void imprimePre(ArvoreBin *raiz)
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

void imprimeSim(ArvoreBin *raiz)
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

void imprimePos(ArvoreBin *raiz)
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

int numNos(ArvoreBin *raiz)
{
    if (raiz != NULL)
    {
        return 1 + numNos(raiz->sae) + numNos(raiz->sad);
    }
    return 0;
}

int altura(ArvoreBin *raiz)
{
    if (raiz == NULL)
    {
        return -1;
    }
    if (raiz->sad == NULL && raiz->sae == NULL)
    {
        return 0;
    }
    int altura_esquerda = altura(raiz->sae);
    int altura_direita = altura(raiz->sad);
    if (altura_esquerda < altura_direita) return (altura_direita + 1);
    else return (altura_esquerda + 1);
}

int igual(ArvoreBin *raiz1, ArvoreBin *raiz2)
{
    if (raiz1 == NULL && raiz2 == NULL)
    {
        return 1;
    }
    //Se as duas nao forem vazias, e o valor for igual.
    if ((raiz1 != NULL && raiz2 != NULL) && (raiz1->info == raiz2->info))
    {
        if (igual(raiz1->sae, raiz2->sae)) return igual(raiz1->sad, raiz2->sad);
    }

    return 0;
}