#include <stdio.h>
#include <stdlib.h>

int** multiplica_matriz(int** m_a, int na_linhas, int na_colunas, int** m_b, int nb_linhas, int nb_colunas)
{
    int soma=0;
    int** matriz_produto;
    matriz_produto=malloc(sizeof(int*)*na_linhas);
    for (int i = 0; i < na_linhas; i++)
    {
        matriz_produto[i]=malloc(sizeof(int)*nb_colunas);
        for (int j = 0; j < nb_colunas; j++)
        {
            for (int k = 0; k < na_colunas; k++)
            {
                soma=soma+((m_a[i][k])*(m_b[k][j]));
            }
            matriz_produto[i][j]=soma;
            soma=0;
        }
    }
    return matriz_produto;
}

void liberar_matriz(int **matriz, int n_linhas)
{
    for (int i = 0; i < n_linhas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

int main() 
{
     int a_linhas, a_colunas;
    printf("linhas: ");
    scanf("%d", &a_linhas);
    printf("colunas: ");
    scanf("%d", &a_colunas);
    int** matriz_a;
    matriz_a=malloc(sizeof(int*)*a_linhas);
    for (int i = 0; i < a_linhas; i++)
    {
        matriz_a[i]=malloc(sizeof(int)*a_colunas);
        for (int j = 0; j < a_colunas; j++)
        {
            scanf("%d", &matriz_a[i][j]);
        }
    }
    

     int b_linhas, b_colunas;
    printf("linhas: ");
    scanf("%d", &b_linhas);
    printf("colunas: ");
    scanf("%d", &b_colunas);
    if (a_colunas!=b_linhas)
    {
        return -1;
    }
    int** matriz_b;
    matriz_b=malloc(sizeof(int*)*b_linhas);
    for (int i = 0; i < b_linhas; i++)
    {
        matriz_b[i]=malloc(sizeof(int)*b_colunas);
        for (int j = 0; j < b_colunas; j++)
        {
            scanf("%d", &matriz_b[i][j]);
        }
    }

    int** matriz_multi;
    matriz_multi=multiplica_matriz(matriz_a, a_linhas, a_colunas, matriz_b, b_linhas, b_colunas);

    for (int i = 0; i < a_linhas; i++)
    {
        for (int j = 0; j < b_colunas; j++)
        {
            printf("%d ", matriz_multi[i][j]);
        }
        printf("\n");
    }
    liberar_matriz(matriz_a, a_linhas);
    liberar_matriz(matriz_b, b_linhas);
    liberar_matriz(matriz_multi, a_linhas);
    return 0;
}