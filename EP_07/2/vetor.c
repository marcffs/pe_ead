#include <stdio.h>
#include <stdlib.h>
//#include "vetor.h"

int* intercala_vetores(int *v_a, int n_a, int *v_b, int n_b, int **v) {
    int N=n_a+n_b;
    v=malloc(sizeof(int*)*(N));
    if (v==NULL)
    {
        return 0;
    }
    for (int i = 0; i < n_a; i++)
    {
        v[i]=v_a[i];
    }
    for (int i = 0; i < n_b; i++)
    {
        v[i+n_a]=v_b[i];
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        if (i!=0)
        {
            if (v[i-1]>v[i])
            {
                int* temp=v[i-1];
                v[i-1]=v[i];
                v[i]=temp;
                i=0;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", v[i]);
    }
    return N;
}

int main()
{
/*    int a, b;
    scanf("%d", &a);
    int* vetor_a=malloc(sizeof(int)*a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", (vetor_a+i));
    }
    scanf("%d", &b);
    int* vetor_b=malloc(sizeof(int)*b);
    for (int i = 0; i < b; i++)
    {
        scanf("%d", (vetor_b+i));
    }*/
    int a=5, b=4;
    int* vetor_a=malloc(sizeof(int)*a);
    vetor_a[0]=1;vetor_a[1]=5;vetor_a[2]=7;vetor_a[3]=12;vetor_a[4]=90;
    int* vetor_b=malloc(sizeof(int)*b);
    vetor_b[0]=2;vetor_b[1]=5;vetor_b[2]=7;vetor_b[3]=46;
    int* vetor;
    int* n=malloc(sizeof(int));
    n=intercala_vetores(vetor_a, a, vetor_b, b, &vetor);
    printf("n: %d\n", n);
    if (*n==0)
    {
        return -1;
    }
/*    for (int i = 0; i < a; i++)
    {
        printf("%d ", vetor_a[i]);
    }
    printf("\n");
    for (int i = 0; i < b; i++)
    {
        printf("%d ", vetor_b[i]);
    }
    printf("\n");
    for (int i = 0; i < *n; i++)
    {
        printf("%d ", vetor[i]);
    }*/
    free(vetor_a);
    free(vetor_b);
//   free(n);
    free(vetor);
    return 0;
}