#include "arvorebusca.h"

Arvbb* arvbb_cria()
{
    Arvbb *temp = NULL;
    return temp;
}

void arvbb_imprime (Arvbb *raiz){
    printf("<");
    if (raiz != NULL)
    {
        arvbb_imprime(raiz->esq);
        printf("%d ", raiz->info);
        arvbb_imprime(raiz->dir);
    }
    printf(">");   
}


Arvbb* arvbb_busca(Arvbb *raiz, int valor)
{
    if (raiz == NULL)
    {
        printf("Nao encontrado");
        return NULL;
    }
    
    if (raiz->info < valor)
    {
        return arvbb_busca(raiz->dir, valor);
    }
    else
    {
        if (raiz->info > valor)
        {
            return arvbb_busca(raiz->esq, valor);
        }
        else
        {
            printf("encontrado");
            return raiz;
        }
    }
}

Arvbb* arvbb_insere (Arvbb *raiz, int valor)
{
    if (raiz == NULL)
    {
        Arvbb *temp = (Arvbb *)malloc(sizeof(Arvbb));
        temp->info = valor;
        temp->dir = NULL;
        temp->esq = NULL;
        raiz = temp;
    }
    else
    {
        if (valor < raiz->info)
        {
            raiz->esq = arvbb_insere(raiz->esq, valor);

        }
        else
        {
            raiz->dir = arvbb_insere(raiz->dir, valor);
        }
        
    }
    return raiz;
}

Arvbb* arvbb_retira (Arvbb *raiz, int valor)
{
    if (raiz == NULL)
    {
        return NULL;
    }
    else
    {
        if (valor < raiz->info)
        {
            raiz->esq = arvbb_retira(raiz->esq, valor);
        }
        else
        {
            if (valor > raiz->info)
            {
                raiz->dir = arvbb_retira(raiz->dir, valor);
            }
            else
            {
                if (raiz->esq == raiz->dir)
                {
                    raiz = NULL;
                }
                else
                {
                    if (raiz->esq == NULL)
                    {
                        raiz = raiz->dir;
                    }
                    else
                    {
                        if (raiz->dir == NULL)
                        {
                            raiz = raiz->esq;
                        }
                        else
                        {
                            Arvbb* temp = raiz->esq;
                            while (temp->dir != NULL)
                            {
                                temp = temp->dir;
                            }
                            raiz->info = temp->info;
                            temp->info = valor;
                            raiz->esq = arvbb_retira(raiz->esq, valor);
                        }
                    }
                }
            }
        }
    }
    return raiz;
}


void arvbb_imprime_decrescente (Arvbb *raiz)
{
    if (raiz != NULL)
    {
        arvbb_imprime_decrescente(raiz->dir);
        printf("%d ", raiz->info);
        arvbb_imprime_decrescente(raiz->esq);
    }   
}