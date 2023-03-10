#include <stdio.h>
#include "mergesort.c" 
#include "bubblesort.c"
#include "quicksort.c"

int main(int argc, char const *argv[])
{
    int teste[10] = {2,6,7,89,5,43,21,1,9,4};

    mergesort(10,teste);
    bubblesort(10,teste);
    quicksort(10,teste);

    for (int k = 0; k < 10; k++)
    {
        printf("%d\n", teste[k]);
    }
    return 0;
}

int* criaVetorEmbaralhado(int n)
{
    int* vetor;
    for (int i = 0; i < n; i++)
    {
        vetor[i] = i;
    }
    
}