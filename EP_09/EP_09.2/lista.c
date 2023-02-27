#include <stdlib.h>
#include "lista.h"

void impares_pares(LinkedNode *inicio, int *qtd_impares, int *qtd_pares) {
    if (inicio == NULL) return;
    if (inicio->data%2 != 0)
    {
        *qtd_impares++;
    }
    if (inicio->data%2 == 0)
    {
        *qtd_pares++;
    }
    return impares_pares(inicio->next, qtd_impares, qtd_pares);
}