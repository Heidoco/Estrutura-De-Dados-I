#include "lista_dupla.h"

NoListaDupla *dllCria(void){
    NoListaDupla* head;
    head = (NoListaDupla*)malloc(sizeof(NoListaDupla));
    head->prox = NULL;
    head->ant = NULL;
    return head;
}

NoListaDupla *dllInsere(NoListaDupla *head, int v){
    NoListaDupla* no;
    no = (NoListaDupla*)malloc(sizeof(NoListaDupla));
    no->prox = head;
    no->ant = NULL;
    no->info = v;
    
    if (head != NULL)
    {
        head->ant = no;
    }
    
    return no;
}

void dllImprime(NoListaDupla *head){
    if (head != NULL)
    {
    NoListaDupla* no_temp = head;
    printf("[%d",no_temp->info);
    no_temp = no_temp->prox;
    while (no_temp->prox != NULL)
    {
        printf(", %d",no_temp->info);
        no_temp = no_temp->prox;
    }
    printf("]\n");
    }
    else
    {
        printf("Lista vazia");
    }
}

int dllVazia(NoListaDupla *head){
    return head->info == 0 && head->prox == NULL;
}

NoListaDupla *dllBusca(NoListaDupla *head, int v){
    NoListaDupla* no_temp = head;
    while (no_temp != NULL)
    {
        if (no_temp->info == v)
        {
            printf("Existe");
            return no_temp;
        }
        no_temp = no_temp->prox;
    }
    printf("Nao existe");
    return NULL;
}

int dllComprimento(NoListaDupla *head){
    NoListaDupla* no_temp = head;
    int contador = 0;
    while (no_temp->prox)
    {
        contador++;
        no_temp = no_temp->prox;
    }
    return contador;
}

NoListaDupla *dllUltimo(NoListaDupla* head){
    NoListaDupla* no_temp = head;
    if (dllVazia(head))return NULL;
    while (no_temp->prox)
    {
        no_temp = no_temp->prox;
    }
    return no_temp;
}

NoListaDupla *dllRetira(NoListaDupla *head, int v){

    NoListaDupla* no_temp = head;
    if (head->info == v)
    {
        if (head->prox == NULL)
        {
            free(head);
            return NULL;
        }
        if (head ->prox != NULL)
        {
            no_temp = head->prox;
            no_temp->ant = NULL;
            free(head);
            head = no_temp;
        }
    }

    while (no_temp != NULL)
    {
        if (no_temp->info == v)
        {
            no_temp->ant->prox = no_temp->prox;
            no_temp->prox->ant = no_temp->ant;
            free(no_temp);
        }
        no_temp = no_temp->prox;
    }
    return head;
}

void dllLibera(NoListaDupla *head){

    while (head != NULL) {
    NoListaDupla* prox = head->prox;
    free(head);
    head = prox;
    }
}

NoListaDupla *dllInsereFim(NoListaDupla *head, int v){ 
    NoListaDupla *temp, *p; 
    temp = (NoListaDupla*)malloc(sizeof(NoListaDupla));
    temp -> info = v;
    temp->prox = NULL;
    temp->ant = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        p = head; 
        while(p -> prox != NULL){
            p = p -> prox;
        }
        p->prox = temp;
        temp->ant = p;
    }
    return head;
}

int dllIgual(NoListaDupla *lista1, NoListaDupla *lista2){
    if (lista1->prox == NULL && lista2->prox == NULL)
    {
        return 1;
    }
    if (lista1->prox == NULL || lista2->prox == NULL){
        return 0;
    }
    if (lista1->info == lista2->info)
    {        
        dllIgual(lista1->prox,lista2->prox);
    }
}