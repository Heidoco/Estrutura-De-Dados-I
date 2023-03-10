#include <stdio.h>

void bubblesort(int n, int v[])
    {
        for (int i = 0; i < n; i++)
        {
            for (int j=0; j < n - 1; j++)
            {
                if (v[j]> v[j+1])
                {
                    int temp = v[j];
                    v[j] = v[j+1];
                    v[j+1] = temp;
                }
            }
        }
    }

void troca(int *v, int a, int b)
{
    int temp = v[a];
    v[a] = v[b];
    v[b] = temp;
}

int particiona(int *v, int a, int b)
{
    int x = v[a];
    while (a < b)
    {
        while (v[a] < x)
        {
            a++;
        }
        while (v[b] > x)
        {
            b--;
        }
        troca(v,a,b);
    }
    return a;
}

void quicksort(int *v, int a, int b)
{
    if (a<b)
    {
        int pivo;
        pivo = particiona(v,a,b);        
        quicksort(v,a,pivo-1);
        quicksort(v,pivo+1,b);
    }
}


void merge(int *A, int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = A[p+i];
    }

    for (int j = 0; j < n2; j++)
    {
        right[j] = A[q + j + 1];
    }

    left[n1] = 100000000000000000000000000000000000;
    right[n2] = 100000000000000000000000000000000000;

    int i = 0;
    int j = 0;

    for (int k = p; k < n1; k++)
    {
        if (left[i] < right[j])
        {
            /* code */
        }
        
    }
    

    // int maiorl = 0, maiorr = 0;
    // for (int k = 0; k < n1; k++)
    // {
    //     if (l[k] < maiorl)
    //     {
    //         maiorl = l[k];
    //     }
    // }

    // for (int m = 0; m < n2; m++)
    // {
    //     if (l[m] < maiorr)
    //     {
    //         maiorr = l[m];
    //     }
    // }


}

void mergesort(int *A, int p, int r)
{
    //A: array, p: primeiro elemento, r: ultimo elemento
    if (p < r)
    {
        int q = (p + r) / 2;
        mergesort(A, p, q);
        mergesort(A, q+1, r);
        merge(A,p,q,r);
    }
}


int main(int argc, char const *argv[])
{
    int teste[10] = {2,6,7,89,5,43,21,1,9,4};
    quicksort(teste, 0, 9 );
    //    bubblesort(10, teste);
    for (int k = 0; k < 10; k++)
    {
        printf("%d\n", teste[k]);
    }
    return 0;
}
