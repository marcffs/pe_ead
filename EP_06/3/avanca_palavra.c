#include <stdio.h>
#include <stdlib.h>

char* avanca_palavra(char *frase, char *trecho)
{
    int k, n=0, a=0, indice=-1, n_novo;
    while (*(frase+a) != '\0')
    {
        k=0;
        while (*(frase+a) == *(trecho+k))
        {
            k++; n++; a++;
            if (*(trecho+k)=='\0')
            {
                indice=n-k;
            }
        }
        if (*(frase+a) != '\0')
        {
            n++; a++;
        }
    }
    if (indice==-1){
        return NULL;
    }
    char* frase_nova=malloc(sizeof(char)*n);
    a=0;
    for (int i = indice; i < n; i++)
    {
        *(frase_nova+a)=*(frase+i);
        a++;
    }
    return frase_nova;
}

int main()
{
    char frase[50]="Frase de Teste", trecho[50]="de";
    puts(frase);
    char* frase_atualizada=avanca_palavra(&frase, &trecho);
    puts(frase_atualizada);
    free(frase_atualizada);
    return 0;
}