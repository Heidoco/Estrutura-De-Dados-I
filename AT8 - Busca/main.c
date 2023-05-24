#include "busca.c"
#include "quicksort.c"

void testa_busca(int qtd)
{
    clock_t inicio, fim;
    int *vetor, *vetorb, *vetorbord;
    
    vetor = criaVetorEmbaralhado(qtd);
    vetorb = vetor;
    vetorbord = criaVetor(qtd);
    printf("\nBuscando com array de tamanho %d: \n", qtd);
    inicio = clock();
    int random = rand()%qtd;
    int indicel = busca_linear(vetor,qtd, random);
    if (indicel > -1)
    {
        printf("Numero buscado: %d\n", vetorb[indicel]);
    }

    fim = clock();
    double tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Busca Linear: n = %d, tempo = %f segundos\n", qtd, tempo);

    inicio = clock();
    quicksort(qtd,vetorb);
    int indiceb = busca_binaria(vetorb,qtd, random);
    if (indiceb > -1)
    {
        printf("Numero buscado: %d\n", vetorb[indiceb]);
    }
    fim = clock();
    tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Busca Binaria com ordenação: n = %d, tempo = %f segundos\n", qtd, tempo);

    inicio = clock();
    int indicebord = busca_binaria(vetorb,qtd, random);
    if (indicebord > -1)
    {
        printf("Numero buscado: %d\n", vetorb[indicebord]);
    }
    fim = clock();
    tempo = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("Busca Binaria em vetor ordenado: n = %d, tempo = %f segundos\n", qtd, tempo);

}


int main()
{
    testa_busca(10);
    testa_busca(100);
    testa_busca(1000);
    testa_busca(10000);
    testa_busca(100000);
    testa_busca(10000000);
    testa_busca(100000000);

}

