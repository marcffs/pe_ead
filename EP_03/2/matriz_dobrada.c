#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int matriz[n][n];
//	printf("n: %d\n", n);
	for (int i=0; i<n; i++){
		for (int j=0; j<n; j++){
			scanf("%d", &matriz[i][j]);
//			for (int l=0; l<n; l++){
//				for (int m=0; m<n; m++){
//					printf("%d ", matriz[l][m]);
//				}
//				printf("\n");
//			}
		}
	}
	printf("\n");
	for (int i=0; i<n; i++){
		int k=n;
		for (int j=0; j<n/2; j++){
			k--;
			matriz[i][j]=matriz[i][j]+matriz[i][k];
//			printf("%d ", matriz[i][j]);
		}
//		printf("\n");
	}
//	printf("\n");
	for (int i=0; i<n/2; i++){
		int k=n-1;
		if (i==1){
			k--;
		}
		for (int j=0; j<n/2; j++){
			matriz[i][j]=matriz[i][j]+matriz[k][j];
//			printf("%d ", matriz[i][j]);
		}
//		printf("\n");
	}
//	printf("\n");
	for (int i=0; i<n/2; i++){
		for (int j=0; j<n/2; j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
