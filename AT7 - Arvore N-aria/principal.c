#include "arvv.h"

int main()
{
    /**
     *      
     *          0
     *       /  |  \
     *      1   2   3
     *    / | \
     *   4  5 6
     */

    Arvv *n0 = arvv_cria(0);
    Arvv *n1 = arvv_cria(1);
    Arvv *n2 = arvv_cria(2);
    Arvv *n3 = arvv_cria(3);
    Arvv *n4 = arvv_cria(4);

    Arvv *n5 = arvv_cria(5);
    Arvv *n6 = arvv_cria(6);

    arvv_insere(n1,n6);
    arvv_insere(n1,n5);
    arvv_insere(n1,n4);
    arvv_insere(n0,n3);
    arvv_insere(n0,n2);
    arvv_insere(n0,n1);

    if (arvv_pertence(n0,12)) printf("Pertence");
    arvv_imprime(n0);
    return 0;
}
