#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "mergesort.c" 
#include "bubblesort.c"
#include "quicksort.c"

int* criaVetorEmbaralhado(int n)
{
    srand(time(NULL));
    int* vetor = malloc(n*sizeof(int));
    int random, temp;
    for (int i = 0; i < n; i++)
    {
        vetor[i] = i;
    }

    for (int j = 0; j < n; j++)
    {
        random = rand()%n;
        temp = vetor[j];
        vetor[j] = vetor[random];
        vetor[random] = temp;
    }
    return vetor;
}

int main(int argc, char const *argv[])
{
    clock_t inicio, fim;
    int n;
    int* vetor100, *vetor1000, *vetor10000;

    n = 100;
    vetor100 = criaVetorEmbaralhado(100);
    inicio = clock();
    quicksort(n, vetor100);
    fim = clock();
    double tempo_quicksort_100 = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("quicksort: n = %d, tempo = %f segundos\n", n, tempo_quicksort_100);

    n = 1000;
    vetor1000 = criaVetorEmbaralhado(1000);
    inicio = clock();
    quicksort(n, vetor1000);
    fim = clock();
    double tempo_quicksort_1000 = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("quicksort: n = %d, tempo = %f segundos\n", n, tempo_quicksort_1000);

    n = 10000;
    vetor10000 = criaVetorEmbaralhado(10000);
    inicio = clock();
    quicksort(n, vetor10000);
    fim = clock();
    double tempo_quicksort_10000 = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("quicksort: n = %d, tempo = %f segundos\n", n, tempo_quicksort_10000);

    n = 100;
    vetor100 = criaVetorEmbaralhado(100);
    inicio = clock();
    mergesort(n, vetor100);
    fim = clock();
    double tempo_mergesort_100 = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("mergesort: n = %d, tempo = %f segundos\n", n, tempo_mergesort_100);

    n = 1000;
    vetor1000 = criaVetorEmbaralhado(1000);
    inicio = clock();
    mergesort(n, vetor1000);
    fim = clock();
    double tempo_mergesort_1000 = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("mergesort: n = %d, tempo = %f segundos\n", n, tempo_mergesort_1000);

    n = 10000;
    vetor10000 = criaVetorEmbaralhado(10000);
    inicio = clock();
    mergesort(n, vetor10000);
    fim = clock();
    double tempo_mergesort_10000 = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("mergesort: n = %d, tempo = %f segundos\n", n, tempo_mergesort_10000);

    n = 100;
    vetor100 = criaVetorEmbaralhado(100);
    inicio = clock();
    bubblesort(n, vetor100);
    fim = clock();
    double tempo_bubble_100 = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("bubble sort: n = %d, tempo = %f segundos\n",n, tempo_bubble_100);

    n = 1000;
    vetor1000 = criaVetorEmbaralhado(1000);
    inicio = clock();
    bubblesort(n, vetor1000);
    fim = clock();
    double tempo_bubble_1000 = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("bubble sort: n = %d, tempo = %f segundos\n", n, tempo_bubble_1000);

    n = 10000;
    vetor10000 = criaVetorEmbaralhado(10000);
    inicio = clock();
    bubblesort(n, vetor10000);
    fim = clock();
    double tempo_bubble_10000 = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    printf("bubble sort: n = %d, tempo = %f segundos\n", n, tempo_bubble_10000);
    return 0;
}