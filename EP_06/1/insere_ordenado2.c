#include <stdio.h>
#include <stdlib.h>

double* insere_ordenado2(int n) 
{
    double* vetor_crescente=malloc(sizeof(double)*n);
    if (vetor_crescente==NULL)
    {
        printf("Erro na alocação.\n");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", (vetor_crescente+i));
        if (*(vetor_crescente+i)==-1)
        {
            return vetor_crescente;
        }
        if (i!=0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (*(vetor_crescente+j-1)>*(vetor_crescente+j))
                {
                    double temp=*(vetor_crescente+j);
                    *(vetor_crescente+j)=*(vetor_crescente+j-1);
                    *(vetor_crescente+j-1)=temp;
                    j=0;
                }
            }
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%.1lf ", *(vetor_crescente+j));
        }
        printf("\n");
    }
    return vetor_crescente;
}

int main()
 {
    int n;
    scanf("%d", &n); 
    double* vetor=insere_ordenado2(n);
    free(vetor);
    return 0;
 }
