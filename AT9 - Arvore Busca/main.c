#include "arvorebusca.h"

int main()
{
    Arvbb* arvore = arvbb_cria();
    arvore = arvbb_insere(arvore, 10);
    arvore = arvbb_insere(arvore, 2);
    arvore = arvbb_insere(arvore, 5);
    arvore = arvbb_insere(arvore, 12);
    arvore = arvbb_insere(arvore, 14);
    arvore = arvbb_insere(arvore, 0);
    arvore = arvbb_insere(arvore, 22);
    arvore = arvbb_insere(arvore, -2);


    arvbb_imprime(arvore);
    printf("\nRetira 10: \n");
    arvore = arvbb_retira(arvore, 10);
    arvbb_imprime(arvore);

    printf("\nRetira -2: \n");
    arvore = arvbb_retira(arvore, -2);
    arvbb_imprime(arvore);

    printf("\nRetira 12: \n");
    arvore = arvbb_retira(arvore, 12);
    arvbb_imprime(arvore);

    printf("\nDecrescente: \n");
    arvbb_imprime_decrescente(arvore);
    printf("\nBuscando 2:\n");
    arvbb_busca(arvore, 2);
    printf("\nBuscando -10: \n");
    arvbb_busca(arvore, -10);
    return 0;
}
