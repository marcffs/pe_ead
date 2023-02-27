//#include "determinante.h"
#include <stdio.h>

void remove_primeira_linha_e_coluna_c(int n, float m_entrada[n][n], float m_saida[n-1][n-1], int c)
{
    for (int i=0;i<n;i++)
    {
        int k=0;
        for (int j=0;j<n;j++)
        {
            if (k==c) 
            {
                k++;
            }
            m_saida[i][j]=m_entrada[i+1][k];
            k++;
        }
    }
}
float calcula_determinante(int n, float m_entrada[n][n]) 
{
    int i=1;
    if (n==1)
    {
        return m_entrada[0][0];
    }
    if (n>=2)
    {
        int c, soma=0;
        float m_saida[n-1][n-1];
        for (c = 0; c < n; c++)
        {
            int pow=-1;
            for (int k=0;k<=c;k++)
            {
                pow=pow*(-1);
            }
            remove_primeira_linha_e_coluna_c(n, m_entrada, m_saida, c);
            soma=soma+(m_entrada[0][c]*pow*calcula_determinante(n-1, m_saida));
        }
        return soma; 
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    float m_entrada[n][n];
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            scanf("%f", &m_entrada[i][j]);
        }
    }
    printf("%.2f\n", calcula_determinante(n, m_entrada));
    return 0;
}