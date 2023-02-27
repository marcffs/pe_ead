#include "operacoes.h"

void soma(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
	for (int i=0; i<n_linhas; i++){
		for (int j=0; j<n_colunas; j++){
			resp[i][j]=a[i][j]+b[i][j];
		}
	}
}

void transposta(int m[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
	for (int i=0; i<n_linhas; i++){
		for (int j=0; j<n_colunas; j++){
	   		resp[i][j]=m[j][i];
    	}
	}
}

void concatena_horizontal(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    for (int i=0; i<n_linhas; i++){
		for (int j=0; j<n_colunas; j++){
			resp[i][j]=a[i][j];
		}
	}
	for (int i=0; i<n_linhas; i++){
		for (int j=0; j<n_colunas; j++){
			resp[i][j+n_colunas]=b[i][j];
		}
	}
}

void concatena_vertical(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
    for (int i=0; i<n_linhas; i++){
		for (int j=0; j<n_colunas; j++){
			resp[i][j]=a[i][j];
		}
	}
	for (int i=0; i<n_linhas; i++){
		for (int j=0; j<n_colunas; j++){
			resp[i+n_linhas][j]=b[i][j];
		}
	}
}

void multiplicacao(int a[MAX_LINHAS][MAX_COLUNAS], int b[MAX_LINHAS][MAX_COLUNAS], int n_linhas, int n_colunas, int resp[MAX_LINHAS][MAX_COLUNAS])
{
	for (int i=0; i<n_linhas; i++){
		for (int j=0; j<n_colunas; j++){
			resp[i][j]=0;
			for (int k=0; k<n_linhas; k++){
				int multiplicacao=0;
				multiplicacao=a[i][k]*b[k][j];
				resp[i][j]=resp[i][j]+multiplicacao;
			}
		}
	}
}
