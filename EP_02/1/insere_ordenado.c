#include <stdio.h>
int main() {
	int v[100];
	for (int i=0; i>=0; i++){
		printf("Digite: ");
		scanf("%d", &v[i]);
		while (v[i]<-1){
			printf("Digite: ");
			scanf("%d", &v[i]);
		}
		if(v[i]==-1){
			return 0;
		} else {
			for (int j=0; j<=i; j++){
				if (v[j]<v[j-1]){
					int z;
					z=v[j-1];
					v[j-1]=v[j];
					v[j]=z;
					j=0;
				}
			}
			for (int k=0; k<=i; k++){
				printf("%d ", v[k]);
			}
			printf("\n");
		}
	}
}
