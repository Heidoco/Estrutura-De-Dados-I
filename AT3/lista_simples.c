#include "lista_simples.h"

node sllCria(){
    node temp;
    temp = (node)malloc(sizeof(NoLista)); 
    temp -> prox = NULL;
    return temp;
}


node sllInsere(node head, int valor){
    node temp;
    temp = sllCria();
    temp -> info = valor;
    temp -> prox = head; // novo nó aponta para o antigo primeiro nó
    head = temp; // atualiza o ponteiro head para apontar para o novo primeiro nó
    return head;
}


void sllImprime(node head){
    if (sllVazia(head))
    {
        return;
    };
    node copialista = head;
    printf("[");
    printf("%d, ", copialista->info);
    
    while (copialista->prox != NULL)
    {
        copialista = copialista->prox;
        printf("%d, ", copialista->info);
    }
    printf("]\n");
}

int sllVazia(node head) {
    if (head == NULL || (head->info == 0 && head->prox == NULL)) {
        return 1;
    }
    return 0;
}


node sllBusca(node head, int v){
    
    node copialista = head;
    while (copialista->prox != NULL) 
    {
        if (v == copialista->info){
            printf("Existe");
            return copialista;            
        }
        copialista = copialista->prox;
    }
    printf("Não Existe");
    return copialista;
}

int sllComprimento(node head){
    node copialista = head;
    int cont = 0;
    while (copialista != NULL)
    {
        cont ++;
        copialista = copialista->prox;

    }
    return cont;
}

node sllUltimo(node head){
    node copialista = head;
    if (head == NULL) 
    { 
        return NULL;
    }
    while (copialista->prox != NULL) 
    {
        copialista = copialista->prox;
    }
    return copialista;
}

node sllRetira(node head, int v){
    node atual = head;
    node proximo = head->prox;

    if (atual->info == v)
    {
        head = proximo;
        free(atual);
        return head;
    }
    
    while (atual->prox != NULL) 
    {
        if (v == proximo->info){
            atual->prox = proximo->prox;
            free(proximo);
            return head;
        }
        proximo = proximo->prox;
        atual = atual->prox;
    }
    return head;
}

void sllLibera(node head){
    node atual = head;
    while (atual != NULL)
    {
        node proximo = atual->prox;
        free(atual);
        atual = proximo;
    }
}

node sllInsereFim(node head, int v){
    node temp,p; 
    temp = sllCria();
    temp -> info = v;
    if(head == NULL){
        head = temp;
    }
    else{
        p  = head; 
        while(p -> prox != NULL){
            p = p -> prox;
        }
        p->prox = temp;
    }
    return head;
}
