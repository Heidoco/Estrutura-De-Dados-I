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
    printf("%d", copialista->info);
    
    while (copialista->prox != NULL)
    {
        copialista = copialista->prox;
        printf(", %d", copialista->info);
    }
    printf("]\n");
}

int sllVazia(node head) {
    return head == NULL; // Caso ponteiro da head seja nulo, retorna verdadeiro para a lista vazia
}


node sllBusca(node head, int v){
    
    node copialista = head;
    while (copialista != NULL) 
    {
        if (v == copialista->info){
            printf("%d Pertence\n", v);
            return copialista;            
        }
        copialista = copialista->prox;
    }
    printf("%d Não Pertence\n", v);
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

int sllIgual(node lista1, node lista2){
    node tempL1, tempL2;
    tempL1 = lista1;
    tempL2 = lista2;
    while (tempL1 != NULL && tempL2 != NULL)
    {
        if (tempL1->info != tempL2->info)return 0;
        tempL1 = tempL1->prox;
        tempL2 = tempL2->prox;
    }
    return tempL1 == NULL && tempL2 == NULL;
}

void sllImprimeRecursivo(node head){
    if (head == NULL)
    {
        printf("\n");
        return;
    }
    printf(" %d" , head->info);
    sllImprimeRecursivo(head -> prox);
}

node sllRetiraRecursivo(node head, int v){
    if (head == NULL)return head;
    if (head->prox->info == v)
    {
        node temp;
        temp = head->prox;
        head->prox = temp->prox;
        free(temp);
        return head;
    }
    else
    {
        sllRetiraRecursivo(head->prox, v);
    }    
}

int sllComprimentoRecursivo(node head){
    int cont = 0;
    if(head == NULL)return 0;
    cont += (1 + sllComprimentoRecursivo(head->prox));
    return cont;
}

int sllIgualRecursivo(node lista1, node lista2){
    if (lista1->prox == NULL && lista2->prox == NULL)
    {
        return 1;
    }
    if (lista1->prox == NULL || lista2->prox == NULL){
        return 0;
    }
    if (lista1->info == lista2->info)
    {        
        sllIgualRecursivo(lista1->prox,lista2->prox);
    }

}