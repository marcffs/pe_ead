#include <stdio.h>
#include <math.h>
//#include "frase.h"

void estatisticas_frase(char frase[], int *min, int *max, int *soma, double *media, double *desvio) {
    int vetor[20], k=0, n=0;
    for (int i = 0; i < 100; i++)
    {
        if (frase[i]==' ' || frase[i]==',' || frase[i]==';' || frase[i]==':' || frase[i]=='.' || frase[i]=='\0')
        {
            if (k!=0)
            {
                vetor[n]=k; n++; k=0;
            }
            if (frase[i]=='\0')
            {
                i=100;
            }
        } else
        {
            k++;
        }
    }
    *min=vetor[0];
    *max=vetor[0];
    for (int i = 0; i < n; i++)
    {
        if (vetor[i]<*min)        
        {
            *min=vetor[i];
        }
    }
    printf("min:%d ", *min);
    for (int i = 0; i < n; i++)
    {
        if (vetor[i]>*max)        
        {
            *max=vetor[i];
        }
    }
    printf("max:%d ", *max);
    *soma=0;
    for (int i = 0; i < n; i++)
    {
        *soma=*soma+vetor[i];
    }
    printf("soma:%d ", *soma);
    double soma_a=*soma, n_a=n;
    *media= soma_a/n_a;
    printf("media:%lf \n", *media);
    double auxiliar=0;
    for (int i = 0; i < n; i++)
    {
        auxiliar=auxiliar+((vetor[i]-*media)*(vetor[i]-*media))/n;
    }
    *desvio=sqrt(auxiliar);
}

int main()
{
    int min, max, soma;
    double media, desvio;
    char frase[100]="outra frase de teste";
    estatisticas_frase(frase, &min, &max, &soma, &media, &desvio);    
    return 0;
}