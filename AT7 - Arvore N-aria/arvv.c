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

void arvv_libera(Arvv* a)
{
    if (a != NULL)
    {
        arvv_libera(a->prim);
        arvv_libera(a->prox);
    }
    free(a);
}


int arvv_pertence(Arvv* a, int n)
{

    if (a->info == n) return 1;
    //Cria um ponteiro temporario para o primeiro filho
    Arvv *temp = a->prim;
    //Enquanto existir filho
    while (temp != NULL)
    {
        //Se pertence retorna 1, recursivo ate encontrar uma folha
        if (arvv_pertence(temp,n)) return 1;
        //Testa os proximos filhos
        temp = temp->prox;
    }
    return 0;
}

void arvv_imprime(Arvv* a)
{
    if (a == NULL) return;
    //Imprime a informacao de a
    printf("<%d", a->info );
    //Recursao para o primeiro filho
    arvv_imprime(a->prim);

    printf("> ");
    arvv_imprime(a->prox);
}

int arvv_altura(Arvv* a)
{
    int altura_max = -1;
    Arvv *temp = a->prim;
    while(temp != NULL)
    {
        int altura_sub = arvv_altura(temp);
        if (altura_sub > altura_max)
        {
            altura_max = altura_sub;
        }
        temp = temp->prox;
    }
    return altura_max + 1;
}

int arvv_pares(Arvv* a)
{
    int pares = 0;
    if (a->info % 2 ==0) pares++;
    Arvv *temp = a->prim;
    while(temp != NULL)
    {
        pares += arvv_pares(temp);
        temp = temp->prox;
    }
    return pares;
}

int arvv_folhas(Arvv* a)
{
    int folhas = 0;
    if (a->prim == NULL) folhas++;
    Arvv *temp = a->prim;
    while (temp != NULL)
    {
        folhas += arvv_folhas(temp);
        temp = temp->prox;
    }
    return folhas;
}

int arvv_igual(Arvv* a1, Arvv* a2)
{
    if (a1 == NULL && a2 == NULL) return 1;

    if ((a1 !=NULL && a2 != NULL) && (a1->info == a2->info))
    {
        if (arvv_igual(a1->prim,a2->prim)) return arvv_igual(a1->prox,a2->prox);
    }

    return 0;
}

Arvv* arvv_copia(Arvv* a)
{
    if (a == NULL) return NULL;

    Arvv* novo = arvv_cria(a->info);
    Arvv* temp = a->prim;
    Arvv* ultimo_filho = NULL;

    while (temp != NULL) 
    {
        Arvv* copia = arvv_copia(temp);
        if (copia != NULL) 
        {
            if (ultimo_filho == NULL) 
            {
                novo->prim = copia;
            } 
            else 
            {
                ultimo_filho->prox = copia;
            }
            
            ultimo_filho = copia;
        }
        temp = temp->prox;
    }

    return novo;
}
