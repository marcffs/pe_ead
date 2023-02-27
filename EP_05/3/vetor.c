#include <stdio.h>
#include <math.h>
//#include "vetor.h"

void estatisticas_vetor(int vetor[], int n, int *min, int *max, int *soma, double *media, double *desvio)
{
    *min=vetor[0];
    *max=vetor[0];
    for (int i = 0; i < n; i++)
    {
        if (vetor[i]<*min)        
        {
            *min=vetor[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (vetor[i]>*max)        
        {
            *max=vetor[i];
        }
    }
    *soma=0;
    for (int i = 0; i < n; i++)
    {
        *soma=*soma+vetor[i];
    }
    double soma_a=*soma, n_a=n;
    *media= soma_a/n_a;
    double auxiliar=0;
    for (int i = 0; i < n; i++)
    {
        auxiliar=auxiliar+((vetor[i]-*media)*(vetor[i]-*media))/n;
    }
    *desvio=sqrt(auxiliar);
}

int main() 
{
    int n, min, max, soma;
    double media, desvio;
    scanf("%d", &n);
    int vetor[n];
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &vetor[i]);
    }
    estatisticas_vetor(vetor, n, &min,&max, &soma, &media, &desvio);
    return 0;
}