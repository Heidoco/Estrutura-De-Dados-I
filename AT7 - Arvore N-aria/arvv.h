#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* tipo abstrato de dados Arvv */
struct arvv {
    int info;
    struct arvv *prim;
    struct arvv *prox;
};

typedef struct arvv Arvv;

Arvv* arvv_cria(int v);
void arvv_insere(Arvv*a, Arvv*sa);
void arvv_libera(Arvv* a);
int arvv_pertence(Arvv* a, int n);
void arvv_imprime(Arvv* a);
int arvv_altura(Arvv* a);
int arvv_pares(Arvv* a);
int arvv_folhas(Arvv* a);
int arvv_igual(Arvv* a1, Arvv* a2);
Arvv* arvv_copia(Arvv* a);
