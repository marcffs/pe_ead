#include <stdio.h>
//#include "conta_linhas_texto.h"

void conta_linhas(char texto[], int largura_linha, int* qtd_linhas)
{
    int aux[100], k=0;
    *qtd_linhas=1;    
    for ( int i = 0 ; i <= 1000; i++)
    {
        if (texto[i]!='\0') 
        {
            if (texto[i]==' ')
            {
                aux[k]=i;
                k++;
            }
            if (i==largura_linha)
            {
                int j=aux[k];
                texto[j]='\n';
                *qtd_linhas++;
                i=j;
/*                int j=i;
                while (texto[j]!=' ')
                {
                    j--;
                }
                texto[j]='\n';
                *qtd_linhas=*qtd_linhas+1;
                k=0;
                i=j;
            } else{
                k++;
            }*/
            }
        }
         else
        {
            i=1000;
        }
    }
}

int main()
{
    int n=10, l;
    char frase[100]="Texto para teste ABCD";
    conta_linhas(frase, n, &l);
    puts(frase);
    return 0;
}