#include "remover_palavra.h"

void remover_palavra(int n, char frase[]) {
	int c=0, words=1, blackList[50];
	for (int i=0; i<100; i++){
		if (frase[i]==' '){
			words++;
		}
		if (words==n){
			blackList[c]=i;
			c++;
		}
	}
	c=0;
	for (int i=0; i<100; i++){
		if (i!=blackList[c]){
//			printf("%s", &frase[i]);
		} else {
			c++;
		}
	}
}
