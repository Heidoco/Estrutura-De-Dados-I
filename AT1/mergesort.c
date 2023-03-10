void merge(int *A, int p, int q, int r)
{
    int n1 = q - p + 1; // tamanho do sub-array da esquerda
    int n2 = r - q; // tamanho do sub-array da direita
    int left[n1 + 1]; // array temporário para guardar o sub-array da esquerda
    int right[n2 + 1]; // array temporário para guardar o sub-array da direita

    // copia os elementos do sub-array da esquerda para o array temporário
    for (int i = 0; i < n1; i++)
    {
        left[i] = A[p + i];
    }

    // copia os elementos do sub-array da direita para o array temporário
    for (int j = 0; j < n2; j++)
    {
        right[j] = A[q + j + 1];
    }

    // adiciona um valor sentinela no final de cada array temporário
    left[n1] = __INT_MAX__;
    right[n2] = __INT_MAX__;

    int i = 0;
    int j = 0;

    // mescla os sub-arrays ordenados em um único array ordenado
    for (int k = p; k <= r; k++)
    {
        if (left[i] <= right[j])
        {
            A[k] = left[i];
            i++;
        }
        else
        {
            A[k] = right[j];
            j++;
        }
    }
}

void mergesortr(int *A, int p, int r)
{
    //A: array, p: primeiro elemento, r: ultimo elemento
    if (p < r)
    {
        int q = (p + r) / 2;
        mergesortr(A, p, q);
        mergesortr(A, q+1, r);
        merge(A,p,q,r);
    }
}

void mergesort(int n, int* v)
{
    int p,r;
    p = 0;
    r = n-1;
    mergesortr(v, p, r);
}