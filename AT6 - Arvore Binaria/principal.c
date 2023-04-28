#include "arvoreb.h"

int main()
{
        ArvoreB *raiz = NULL;
       raiz = insere(1,
              insere(2,
                     NULL,
                     insere(4, NULL, NULL)),
              insere(3,
                     insere(5, NULL, NULL),
                     insere(6, NULL, NULL)));
       imprimePre(raiz);
       printf("\n%d", pares(raiz));
       printf("\n%d", folhas(raiz));
       printf("\n");
       imprimeSim(raiz);
       printf("\n");
       imprimePos(raiz);
       printf("\n");
       printf("%d", numNos(raiz));
       
       return 0;
}
