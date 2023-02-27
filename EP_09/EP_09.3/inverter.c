#include <stdlib.h>
#include <stdio.h>

typedef struct LinkedNode LinkedNode;
struct LinkedNode
{
    int data;
    LinkedNode* next;
};


LinkedNode* inverter_lista(LinkedNode *inicio)
{
    int n=0;
    LinkedNode* atual=inicio;
    while (atual != NULL)
    {
        n++;
        atual=atual->next;
    }
    int vetor[n], i=0;
    atual=inicio;
    while (atual != NULL)
    {
        vetor[i]=atual->data; i++;
        atual=atual->next;
    }
    atual=inicio;
    i=n-1;
    while (atual != NULL)
    {
        vetor[i]; i--;
        atual=atual->next;
    }
    return inicio;
}

int main()
{
    LinkedNode *lista1, *lista2, *lista3, *lista4, *lista5, *atual;
    lista1=malloc(sizeof(LinkedNode));
    lista1->data=1;
    lista1->next=lista2;
    lista2=malloc(sizeof(LinkedNode));
    lista2->data=2;
    lista2->next=lista3;
    lista3=malloc(sizeof(LinkedNode));
    lista3->data=3;
    lista3->next=lista4;
    lista4=malloc(sizeof(LinkedNode));
    lista4->data=4;
    lista4->next=lista5;
    lista5=malloc(sizeof(LinkedNode));
    lista5->data=5;
    lista5->next=NULL;
    atual=lista1;
    while (atual != NULL)
    {
        printf("%d ", atual->data);
        atual = atual->next;
    }
    printf("\n");
    inverter_lista(lista1);
    free(lista1);
    free(lista2);
    free(lista3);
    free(lista4);
    free(lista5);
    free(atual);
    return 0;
}