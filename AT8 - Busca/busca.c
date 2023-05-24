#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int* criaVetorEmbaralhado(int n)
{
    srand(time(0));
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

int* criaVetor(int n)
{
    srand(time(0));
    int* vetor = malloc(n*sizeof(int));
    int random, temp;
    for (int i = 0; i < n; i++)
    {
        vetor[i] = i;
    }
    return vetor;
}


int busca_linear(int *v, int tamanho, int n)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (v[i] == n)
        {
            return i;
        }
    }
    return -1;
}

int busca_binaria(int *v, int tamanho, int n)
{
    int inicio = 0;
    int fim = tamanho-1;
    int meio;

    while (inicio <= fim)
    {
        meio = (inicio + fim)/2;
        if (n > v[meio])
        {
            inicio = meio + 1;
        }
        else if (n < v[meio])
        {
            fim = meio - 1;
        }
        else
        {
            return meio;
        }
    }
    return -1;
}