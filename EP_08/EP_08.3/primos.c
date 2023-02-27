//#include "primos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ListaNumeros
{
    int* numeros;
    int* primos;
    int n_numeros, n_primos;
};
typedef struct ListaNumeros ListaNumeros;


void separar_numeros_primos(ListaNumeros *lista)
{
    for (int i = 0; i < lista->n_numeros; i++)
    {
        int L=(lista->numeros[i])-1, OK=0;
        while (L!=1)
        {
            if (lista->numeros[i]%L==0)
            {
                OK=-1;
                L=2;
            }
            L--;
        }
        if (OK==0)
        {
            lista->n_primos++;
        }
    }
    lista->primos=malloc(sizeof(int)*lista->n_primos);
    int k=0;
    for (int i = 0; i < lista->n_numeros; i++)
    {
        int L=(lista->numeros[i])-1, OK=0;
        while (L!=1)
        {
            if (lista->numeros[i]%L==0)
            {
                OK=-1;
                L=2;
            }
            L--;
        }
        if (OK==0)
        {
            lista->primos[k]=lista->numeros[i];
            k++;
        }
    }
    k=0;
    for (int i = 0; i < lista->n_numeros; i++)
    {
        printf("numero:%d e primo:%d \n", lista->numeros[i], lista->primos[k]);
        if (lista->numeros[i]==lista->primos[k] && k!=lista->n_primos)
        {
            for (int j = i; j < lista->n_numeros-1; j++)
            {
                lista->numeros[j]=lista->numeros[j+1];
            }
            k++;i--;
        }
    }
    printf("\n");
    lista->n_numeros=lista->n_numeros-lista->n_primos;
}

int main()
{
    ListaNumeros* llista;
    llista=malloc(sizeof(ListaNumeros));
    llista->n_numeros=21;
    llista->numeros=malloc(sizeof(int)*llista->n_numeros);
    llista->primos=NULL;
    llista->numeros[0]=100;
    llista->numeros[1]=4;
    llista->numeros[2]=6;
    llista->numeros[3]=31;
    llista->numeros[4]=32;
    llista->numeros[5]=33;
    llista->numeros[6]=34;
    llista->numeros[7]=35;
    llista->numeros[8]=36;
    llista->numeros[9]=37;
    llista->numeros[10]=41;
    llista->numeros[11]=42;
    llista->numeros[12]=43;
    llista->numeros[13]=44;
    llista->numeros[14]=45;
    llista->numeros[15]=46;
    llista->numeros[16]=47;
    llista->numeros[17]=48;
    llista->numeros[18]=200;
    llista->numeros[19]=50;
    llista->numeros[20]=507;
    separar_numeros_primos(llista);
    for (int i = 0; i < llista->n_numeros; i++)
    {
        printf("%d ", llista->numeros[i]);
    }
    printf("\n");
    for (int i = 0; i < llista->n_primos; i++)
    {
        printf("%d ", llista->primos[i]);
    }
    printf("\n");
    free(llista);
    return 0;
}