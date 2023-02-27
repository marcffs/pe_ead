#include <stdio.h>
//#include "duplica_impares.h"

void duplica_impares(int vetor[], int qtd) {
		int impar;
		scanf("%d", &qtd);
		for (int i=0; i<qtd; i++){
  		scanf("%d", &vetor[i]);
  	}
    for (int i=0; i<qtd; i++){	
    	if (vetor[i]%2!=0 && vetor[i]!=-1){
    	 impar++;
    		for (int j=qtd-1; j>i; j--){
    			if (vetor[j+1]==-1 && vetor[j]!=-1){
    				vetor[j+1]=vetor[j];
    				vetor[j]=-1;
    			}
    		}
   		}
   		if(vetor[i]==-1 && impar==1){
   			vetor[i]=vetor[i-1];
   			impar--;
   		}
   	}
}

int main(){
	int N;
	int v[N];
	duplica_impares(v, N);
	for (int i=0; i<N; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
	return 0;
}
