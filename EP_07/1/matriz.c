#include <stdlib.h>
#include "matriz.h"

double **cria_matriz(int n_linhas, int n_colunas)
{
    int ok=0;
    double** matriz;
    matriz=malloc(sizeof(double *)*n_linhas);
    for (int i = 0; i < n_linhas; i++)
    {
        matriz[i]=malloc(sizeof(double)*n_colunas);
        if(i%2!=0 && i!=0)
        {
            ok=1;
        }else
        {
            ok=0;
        }
        for (int j = 0; j < n_colunas; j++)
        {
            if (ok==0)
            {
                matriz[i][j]=0;
                ok=1;
            }else
            {
                matriz[i][j]=1;
                ok=0;
            }
        } 
    }
    return matriz;
}

void liberar_matriz(double **matriz, int n_linhas)
{
    for (int i = 0; i < n_linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}