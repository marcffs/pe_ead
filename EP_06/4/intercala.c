#include <stdio.h>
#include <stdlib.h>

int* intercala(int* vetor_a, int* vetor_b, int* n_a, int* n_b)
{
    int a=0, b=0;
    int* vetor_ab=malloc(sizeof(int)*(*n_a+*n_b));
    if (vetor_ab==NULL)
    {
        return 0;
    }
    for (int i = 0; i < *n_a+*n_b; i++)
    {
        if(b==*n_b)
        {
            *(vetor_ab+i)=*(vetor_a+a);
            a++;
        }else
        {
            if (*(vetor_a+a)<*(vetor_b+b) && a<*n_a)
            {
                *(vetor_ab+i)=*(vetor_a+a);
                a++;
            } else
            {
                *(vetor_ab+i)=*(vetor_b+b);
                b++;
            }
        }
    }
    return vetor_ab;
}

int main()
{
    int *n_a=malloc(sizeof(int)), *n_b=malloc(sizeof(int));
    scanf("%d", n_a);
    int* vetor_a=malloc(sizeof(int)*(*n_a));
    for (int i = 0; i < *n_a; i++)
    {
        scanf("%d", (vetor_a+i));
    }
    scanf("%d", n_b);
    int* vetor_b=malloc(sizeof(int)*(*n_b));
    for (int i = 0; i < *n_b; i++)
    {
        scanf("%d", (vetor_b+i));
    }
    int* vetor_ab=intercala(vetor_a, vetor_b, n_a, n_b);
    for (int i = 0; i < (*n_a)+(*n_b); i++)
    {
        printf("%d ", *(vetor_ab+i));
    }
    printf("\n");
    free(vetor_a);
    free(vetor_b);
    free(n_a);
    free(n_b);
    free(vetor_ab);
    return 0;
}
