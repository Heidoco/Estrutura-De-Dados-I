#include "lista_dupla.h"

NoListaDupla *dllCria(void){
    return NULL;
}

NoListaDupla *dllInsere(NoListaDupla *head, int v){
    NoListaDupla* no;
    no = (NoListaDupla*)malloc(sizeof(NoListaDupla));
    no->ant = NULL;
    no->info = v;
    no->prox = NULL;
    if (head != NULL)
    {
        head->ant = no;
        no->prox = head;
    }
    return no;
}

void dllImprime(NoListaDupla *head){
    if (head != NULL)
    {
    NoListaDupla* no_temp = head;
    printf("[");
    while (no_temp != NULL)
    {
        if (no_temp->prox == NULL)
        {
            printf("%d",no_temp->info);
        }
        else
        {
            printf("%d, ",no_temp->info);
            
        }
        no_temp = no_temp->prox;
    }
    printf("]\n");
    no_temp = NULL;
    }
    else
    {
        printf("Lista vazia");
    }
}

int dllVazia(NoListaDupla *head){
    return head == NULL;
}

NoListaDupla *dllBusca(NoListaDupla *head, int v){
    NoListaDupla* no_temp = head;
    while (no_temp != NULL)
    {
        //printf("Notemp = %d", no_temp->info);
        if (no_temp->info == v)
        {
            printf("Existe");
            no_temp = NULL;
            return no_temp;
        }
        no_temp = no_temp->prox;
    }
     no_temp = NULL;
    printf("Não existe");
    return NULL;
}

int dllComprimento(NoListaDupla *head){
    if (head == NULL)
    {
        return 0;
    }
    NoListaDupla* no_temp = head;
    int contador = 1;
    while (no_temp->prox)
    {
        contador++;
        no_temp = no_temp->prox;
    }
    no_temp = NULL;
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

void dllLibera(NoListaDupla **head_ptr){
    NoListaDupla* prox; 
    while (*head_ptr != NULL) {
        prox = (*head_ptr)->prox;
        free(*head_ptr);
        *head_ptr = prox;
    }
}


NoListaDupla *dllInsereFim(NoListaDupla *head, int v){ 
    NoListaDupla *temp;
    temp = (NoListaDupla*)malloc(sizeof(NoListaDupla));
    temp->info = v;
    temp->prox = NULL;
    if (head == NULL)
    {
        head = temp;
        temp->ant = NULL;
    }
    else
    {
        NoListaDupla *atual = head;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = temp;
        temp->ant = atual;
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

NoListaDupla* dllMerge(NoListaDupla *l1, NoListaDupla *l2){
    NoListaDupla *tl1, *tl2, *mergelist;
    tl1 = l1;
    tl2 = l2;
    mergelist = dllCria();
    while (tl1 != NULL || tl2 != NULL)
    {
        if (tl1 != NULL)
        {
            mergelist = dllInsereFim(mergelist, tl1->info);
            tl1 = tl1->prox;
        }
        if (tl2 != NULL)
        {
            mergelist = dllInsereFim(mergelist, tl2->info);
            tl2 = tl2->prox;
        }
    }
    return mergelist;
    


}