#include <stdio.h>

int main() {
	int palavras=1;
	char frase[100];
	fgets(frase, 100, stdin);
	for (int i=0; i<100; ++i){
		if (frase[i]==' '){
			palavras++;
		}
		if (frase[i]=='\0'){
			printf("%d\n", palavras);
			return 0;
		}
	}
	return 0;
}
