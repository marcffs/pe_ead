#include <stdio.h>
#include <stdlib.h>
//#include "vetor.h"

int *duplica_impares(int* v, int n_entrada, int* n_retorno)
{
    *n_retorno=n_entrada;
    for (int i = 0; i < n_entrada; i++)
    {
        if (*(v+i)%2!=0)
        {
            *n_retorno=*n_retorno+1;
        }
    }
    int j=0, *v_impar=malloc(sizeof(int)*(*n_retorno));
    if (v_impar==NULL)
    {
        return 0;
    } 
    for (int i = 0; i < *n_retorno; i++)
    {
        *(v_impar+i+j)=*(v+i);
        if (*(v_impar+i+j)%2!=0)
        {
            j++;
            *(v_impar+i+j)=*(v+i);
        }
        if(j+i==*n_retorno){
            i=*n_retorno;
        }
    }
    return v_impar;
}

int main()
{
    int n_entrada; int* n_retorno=malloc(sizeof(int));
    printf("Tamanho do vetor: ");
    scanf("%d", &n_entrada);
    *n_retorno=n_entrada;
    int* vetor=malloc(sizeof(int)*n_entrada);
    for (int i = 0; i < n_entrada; i++)
    {
        scanf("%d", (vetor+i));
    }
    for (int i = 0; i < n_entrada; i++)
    {
        printf("%d ", *(vetor+i));
    }
    printf("\n");
    int* vetor_impar=duplica_impares(vetor, n_entrada, n_retorno);
    for (int i = 0; i < *n_retorno; i++)
    {
        printf("%d ", *(vetor_impar+i));
    }
    printf("\n");
    free(vetor);
    free(vetor_impar);
    free(n_retorno);
    return 0;
}
