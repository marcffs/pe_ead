#include <stdio.h>
int main() {
	int n, iii, yes=0;
	scanf("%d", &n);
	iii=n;
	for (iii; iii>2; iii--){
		int ii=iii-1, i=ii-1;
		if(i*ii*iii==n){
		yes++;
//		printf("!");
		}
	}
	if (yes!=0){
		printf("SIM\n");
	} else {
		printf("NAO\n");
	}
	return 0;
}
