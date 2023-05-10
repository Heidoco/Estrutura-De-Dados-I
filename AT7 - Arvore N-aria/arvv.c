#include "arvv.h"

Arvv *arvv_cria(int v)
{
    Arvv *no = (Arvv *)malloc(sizeof(Arvv));
    no->info = v;
    no->prim = NULL;
    no->prox = NULL;
    return no;
}

void arvv_insere(Arvv*a, Arvv*sa)
{
    //O próximo do novo nó será o que está em primeiro
    sa->prox = a->prim;
    //O primeiro filho será a sub-arvore
    a->prim = sa;
}

// Arvv* arvv_libera(Arvv* a)
// {

// }
int arvv_pertence(Arvv* a, int n)
{
    if (a->info == n)
    {
        return 1;
    }
    Arvv *temp = a->prim;
    while (temp != NULL)
    {
        if (arvv_pertence(temp,n)) return 1;
        temp = temp->prox;
    }
    return 0;
}

void arvv_imprime(Arvv* a)
{
    if (a == NULL)
    {
        return;
    }
    printf("<%d", a->info );
    arvv_imprime(a->prim);
    printf(">");
    arvv_imprime(a->prox);
}

int arvv_altura(Arvv* a)
{
    
}
// int arvv_pares(Arvv* a);
// int arvv_folhas(Arvv* a);
// int arvv_ivual(Arvv* a1, Arvv* a2);
// Arvv* arvv_copia(Arvv* a);
