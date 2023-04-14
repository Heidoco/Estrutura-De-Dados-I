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

void quicksortr(int *v, int a, int b)
{
    if (a<b)
    {
        int pivo;
        pivo = particiona(v,a,b);        
        quicksortr(v,a,pivo-1);
        quicksortr(v,pivo+1,b);
    }
}

void quicksort(int n, int* v)
{
    int a, b;
    a = 0;
    b = n - 1;
    quicksortr(v, a, b);
}
