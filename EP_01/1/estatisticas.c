#include <stdio.h>

int main() {
	int N, total, c=0;
	float n, big=0, small=0, sum=0, mean=0;
	scanf("%d", &N);
	total=N;
	for(N; N!=0; N--){
	 scanf("%f", &n);
	 while(c==0){
	  big=n;
	  small=n;
	  c++;
	 }
	 if (n>big){
	  big=n;
	 }
	 if (n<small){
	  small=n;
	 }
	 sum=sum+n;
	}
	printf("%.2f\n",small);
	printf("%.2f\n",big);
	mean=sum/total;
	printf("%.2f\n",mean);
	return 0;
}
