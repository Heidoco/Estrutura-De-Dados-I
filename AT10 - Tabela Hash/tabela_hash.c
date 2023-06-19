#include "tabela_hash.h"

static int hash(int k)
{
    return k%N;
}

Aluno* hsh_set(Hash tab, int mat, const char* n, char *e, char *t)
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
            return temp;
        }
        temp = temp->prox;
    }
    return NULL;
}

void hsh_remove(Hash tab, int mat)
{
    int h = hash(mat);
    Aluno *temp = tab[h];
    Aluno* anterior = NULL;
    while (temp != NULL)
    {
        if (temp->matricula == mat)
        {
            if (anterior == NULL)
            {
                tab[h] = temp->prox;
            }
            else
            {
                anterior->prox = temp->prox;
            }
            free(temp);
            return;
        }
        anterior = temp;
        temp = temp->prox;
    }
}

void hsh_imprime(Hash tab)
{
    Aluno *temp;
    for (int i = 0; i < N; i++)
    {
        if (tab[i] != NULL)
        {
            temp = tab[i];
            while (temp != NULL)
            {
                printf("Matricula: %d\n", temp->matricula);
                printf("Nome: %s\n", temp->nome);
                printf("Turma: %s\n", temp->turma);
                printf("Email: %s\n------- \n", temp->email);
                temp = temp->prox;
            }
        }
    }
}