#include <stdlib.h>
#include "comparar_listas.h"

int comparar_listas(LinkedNode *inicio_lista1, LinkedNode *inicio_lista2) {
    if (inicio_lista1 == NULL && inicio_lista2 == NULL) return 1;
    if (inicio_lista1->data == inicio_lista2->data)
    {
        return comparar_listas(inicio_lista1->next, inicio_lista2->next);
    }else
    {
        return 0;
    }
}