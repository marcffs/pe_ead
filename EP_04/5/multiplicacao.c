#include <stdio.h>
//#include "multiplicacao.h"

int multiplicacao_russa(int a, int b) {
    if (a==1)
    {
        return b;
    }
    if (a%2!=0)
    {
        return b + multiplicacao_russa(a/2,b*2);
    } 
    return multiplicacao_russa((a/2),(b*2));
}

int main() {
	int a=123, b=21;
	printf("%d\n", multiplicacao_russa(a,b));
	return 0;
} 