#include <stdio.h>
#include <stdlib.h>

int compara(int a, int b, int *count)
{

    (*count)++;
    return (a < b);

}

void imprimir(int* vetor, int n)
{
    for (int i = 0; i < n; i++)
    {
        if(i==n-1)
        {
            printf("%d\n", vetor[i]);
        }else
        {
            printf("%d ", vetor[i]);
        }
    }
    return;
}

int ordem_crescente(int n_elementos, int* vetor)
{
    int i, k, comparacoes=0;
    for (i = 1; i < n_elementos; i++)
    {
        int atual = vetor[i];
        int indice = i;
        for (k = i-1; k >= 0 && compara(atual, vetor[k], &comparacoes); k--)
        {
            vetor[k+1] = vetor[k];
            indice--;
        }
        vetor[indice] = atual;
        imprimir(vetor, n_elementos);
    }
    return comparacoes;
}

int main()
{
    int n, c;
    scanf("%d", &n);
    int *v=malloc(sizeof(int)*n);
    if (v==NULL) return 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    imprimir(v, n);
    c=ordem_crescente(n, v);
    imprimir(v, n);
    printf("%d\n", c);
    free(v);
    return 0;
}
