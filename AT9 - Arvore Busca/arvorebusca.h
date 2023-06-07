#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct arvbb 
{
    int info;
    struct arvbb* esq;
    struct arvbb* dir;
};

typedef struct arvbb Arvbb;


Arvbb* arvbb_cria();
void arvbb_imprime (Arvbb *raiz);
Arvbb* arvbb_busca(Arvbb *raiz, int valor);
Arvbb* arvbb_insere (Arvbb *raiz, int valor);
Arvbb* arvbb_retira (Arvbb *raiz, int valor);
void arvbb_imprime_decrescente (Arvbb *raiz);
