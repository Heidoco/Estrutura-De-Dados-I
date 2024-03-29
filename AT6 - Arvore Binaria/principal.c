#include "arvorebin.h"

int main()
{
       ArvoreBin *raiz1 = NULL , *raiz2 = NULL, *raiz3 = NULL;
       printf("Numero de nós: %d\n", numNos(raiz1));
       printf("Altura: %d\n", altura(raiz1));
       raiz1 = insere(1,
              insere(2,
                     NULL,
                     insere(4, NULL, NULL)),
              insere(3,
                     insere(5, NULL, NULL),
                     insere(6, NULL, NULL)));
       imprimePre(raiz1);
       raiz2 = insere(1,
              insere(2,
                     NULL,
                     insere(4, NULL, NULL)),
              insere(3,
                     insere(5, NULL, NULL),
                     insere(6, NULL, NULL)));

       raiz3 = insere(8,
              insere(3,
                     insere(1, NULL, NULL),
                     insere(6,
                            insere(4, NULL, NULL),
                            insere(7, NULL, NULL))),
              insere(10,
                     NULL,
                     insere(14,
                            insere(13, NULL, NULL),
                            NULL)));

       printf("\nValores pares: %d\n", pares(raiz1));
       printf("Quantidade de folhas: %d\n", folhas(raiz1));
       imprimeSim(raiz1);
       printf("\n");
       imprimeSim(raiz2);
       printf("\n");
       imprimePos(raiz1);
       printf("\n");
       printf("Numero de nós: %d\n", numNos(raiz1));
       printf("Altura: %d\n", altura(raiz1));
       if (igual(raiz1,raiz2)) printf("Raiz 1 e 2 São iguais\n");
       if (igual(raiz1,raiz3)) printf("Raiz 1 e 3 São iguais"); else printf("Raiz 1 e 3 São diferentes\n");
       
       printf(toString(raiz1));

       ArvoreBin *raiz4 = insere(10, NULL, NULL);
       printf("\nAltura da arvore 4: %d\n", altura(raiz4));
       raiz4 = insere(8, raiz4, NULL);
       printf("Altura da arvore 4: %d\n", altura(raiz4));
       raiz4 = insere(6, raiz4, NULL);
       printf("Altura da arvore 4: %d\n", altura(raiz4)); 

       printf("Arvore 3: ");
       imprimePre(raiz3);
       printf("\nValores pares da árvore 3: %d\n", pares(raiz3));
       printf("Quantidade de folhas da árvore 3: %d\n", folhas(raiz3)); 

       if (igual(raiz2, NULL)) printf("Raiz 2 é nula\n");
       if (igual(NULL, raiz2)) printf("Raiz 2 é nula\n");
       if (igual(NULL, NULL)) printf("Nulas\n");

       return 0;
}
