#include "lista_simples.h"

node sllCria(){
    node temp; // declare a node
    temp = (node)malloc(sizeof(NoLista)); // allocate memory using malloc()
    temp -> prox = NULL;// make next point to NULL
    return temp;//return the new node
}


node sllInsere(node head, int valor){
    node temp,p; 
    temp = sllCria();
    temp -> info = valor;
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


void sllImprime(node head){
    node copialista = head;
    printf("%d\n", copialista->info);
    while (copialista->prox != NULL)
    {
        copialista = copialista->prox;
        printf("%d\n", copialista->info);
    }
}

int sllVazia(node head){
    if (head->info)
    {
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
