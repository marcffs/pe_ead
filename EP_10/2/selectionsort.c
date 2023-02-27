#include <stdio.h>
#include <stdlib.h>

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
    int i, comparacoes=0;
    for (i = 0; i < n_elementos-1; i++)
    {
        int menor = i;
        int k, q=0;
        for (k = i+1; k < n_elementos; k++)
        {
            if (vetor[k] < vetor[menor])
            {
                menor=k;
            }
        }
        if (menor != i)
        {
            int temp = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = temp;
            q++;
        }
        imprimir(vetor, n_elementos);
        comparacoes=comparacoes+q;
    }
    return comparacoes;
}

int main()
{
    int n, c;
    scanf("%d", &n);
    int* v=malloc(sizeof(int)*n);
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
