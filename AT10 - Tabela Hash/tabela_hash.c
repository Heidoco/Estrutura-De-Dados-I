#include "tabela_hash.h"

static int hash(int k)
{
    return k%N;
}

Aluno* hsh_get(Hash tab, int mat)
{
    hash(mat);
}

Aluno* hsh_set(Hash tab, int mat,const char* n, char *e, char *t)
{
    int h = hash(mat);
    Aluno *temp = tab[h];
    while (temp != NULL)
    {
        if (temp->matricula == mat)
        {
            break;
        }
        temp = temp->prox;
    }
    if (temp == NULL)
    {
        temp = (Aluno *)malloc(sizeof(Aluno));
        temp->matricula = mat;
        temp->prox = tab[h];
        tab[h] = temp;
    }
    temp->email = e;
    temp->nome  = n;
    temp->turma = t;
    
}

Aluno* hsh_get(Hash tab, int mat)
{
    int h = hash(mat);
    Aluno *temp = tab[h];
    while (temp != NULL)
    {
        if (temp->matricula == mat)
        {
            printf("%d", temp->matricula);
            return temp;
        }
        temp = temp->prox;
    }
}