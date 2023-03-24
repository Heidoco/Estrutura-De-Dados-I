#include <stdio.h>
#include <stdlib.h>

struct NoListaDupla {
    int info;
    struct NoListaDupla *ant;
    struct NoListaDupla *prox;
};

typedef struct NoListaDupla NoListaDupla;

NoListaDupla *dllCria(void);
NoListaDupla *dllInsere(NoListaDupla *head, int v);
void dllImprime(NoListaDupla *head);
int dllVazia(NoListaDupla *head);
NoListaDupla *dllBusca(NoListaDupla *head, int v);
int dllComprimento(NoListaDupla *head);
NoListaDupla *dllUltimo(NoListaDupla *head);
NoListaDupla *dllRetira(NoListaDupla *head, int v);
void dllLibera(NoListaDupla *head);
NoListaDupla *dllInsereFim(NoListaDupla *head, int v);
int dllIgual(NoListaDupla *lista1, NoListaDupla *lista2);
NoListaDupla* dllMerge(NoListaDupla *l1, NoListaDupla *l2);
