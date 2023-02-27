#include <stdio.h>
//#include "remover_duplicados.h"

void remover_duplicados(int vetor[], int qtd) {
	int C=0, vetorA[qtd];
	scanf("%d", &qtd);
	for (int i=0; i<qtd; i++){
		scanf("%d", &vetor[i]);
	  vetorA[i]=vetor[i];
		while ((vetor[i]<vetor[i-1] || vetor[i]<0) && C!=0){
	  	scanf("%d", &vetor[i]);
	    vetorA[i]=vetor[i];
  	}
  	C++;
  }
	for (int j=0; j<qtd; j++){
		if (vetor[j]==vetor[j+1] || vetor[j]==vetor[j-1]){
			if (vetor[j]==vetor[j+1]){
				for (int k=j+1; k<qtd; k++){
		  		vetor[k]=vetor[k+1];
		  	}
//		  	vetor[qtd-1]=-1;
		  } else {
		  		for (int k=j-1; k<qtd; k++){
		  			vetor[k]=vetor[k+1];
		  	  }
//		  	  vetor[qtd-1]=-1;	
		  }
		  int A=0;
		  for (int l=0; l<qtd; l++){
		  	if (vetor[j]!=vetorA[l]){
		  		A++;
		  	}
		  	if (A==qtd){
		  		vetor[j]=-1;
		  	}  
		  }
   	}
	}
}

int main(){
	int N;
	int v[N];
	remover_duplicados(v, N);
	for (int i=0; i<10; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
	return 0;
}
