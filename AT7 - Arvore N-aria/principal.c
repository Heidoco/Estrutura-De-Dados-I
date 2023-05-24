#include "arvv.h"

int main()
{
    /**
     *      
     *          0
     *       /  |  \
     *      1   2   3
     *    / | \      \
     *   4  5 6       8
     *         \       \
     *          7       9
     *                   \
     *                    10
     */

    Arvv *n_0 = arvv_cria(0);
    Arvv *n_1 = arvv_cria(1);
    Arvv *n_2 = arvv_cria(2);
    Arvv *n_3 = arvv_cria(3);
    Arvv *n_4 = arvv_cria(4);
    Arvv *n_5 = arvv_cria(5);
    Arvv *n_6 = arvv_cria(6);
    Arvv *n_7 = arvv_cria(7);
    Arvv *n_8 = arvv_cria(8);
    Arvv *n_9 = arvv_cria(9);
    Arvv *n_10 = arvv_cria(10);

    arvv_insere(n_9,n_10);
    arvv_insere(n_8,n_9);
    arvv_insere(n_3,n_8);
    arvv_insere(n_6,n_7);
    arvv_insere(n_1,n_6);
    arvv_insere(n_1,n_5);
    arvv_insere(n_1,n_4);
    arvv_insere(n_0,n_3);
    arvv_insere(n_0,n_2);
    arvv_insere(n_0,n_1);
    
    Arvv *n0 = arvv_cria(0);
    Arvv *n1 = arvv_cria(1);
    Arvv *n2 = arvv_cria(2);
    Arvv *n3 = arvv_cria(3);
    Arvv *n4 = arvv_cria(4);
    Arvv *n5 = arvv_cria(5);
    Arvv *n6 = arvv_cria(6);
    Arvv *n7 = arvv_cria(7);
    Arvv *n8 = arvv_cria(8);
    Arvv *n9 = arvv_cria(9);
    Arvv *n10 = arvv_cria(10);

    arvv_insere(n9,n10);
    arvv_insere(n8,n9);
    arvv_insere(n3,n8);
    arvv_insere(n6,n7);
    arvv_insere(n1,n6);
    arvv_insere(n1,n5);
    arvv_insere(n1,n4);
    arvv_insere(n0,n3);
    arvv_insere(n0,n2);
    arvv_insere(n0,n1);

    if (arvv_pertence(n0,10)) printf("Pertence\n");
    arvv_imprime(n0);
    printf("\nAltura: %d\n", arvv_altura(n0));
    printf("Quantidade de numeros pares: %d\n", arvv_pares(n0));
    printf("Quantidade de folhas: %d\n",arvv_folhas(n0));
    
    if (arvv_igual(n0,n_0)) printf("As arvores sao iguais!\n");
    if (arvv_igual(n10,n_0)) printf("As arvores sao iguais!\n");

    //arvv_libera(n3);

    Arvv *copiada = arvv_copia(n0);
    arvv_imprime(copiada);
    return 0;
}
