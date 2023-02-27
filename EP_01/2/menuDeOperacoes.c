#include <stdio.h>

int main() {
	int a, b, c, sum, tripleSum, product, lowest;
	int n, C=0;
	while (C==0){
	scanf("%d",&n);
	 if (n==1){
	  scanf("%d",&a);
	  scanf("%d",&b);
	  sum=a+b;
	  printf("%d\n",sum);
	 }
	 if (n==2){
	  scanf("%d",&a);
	  scanf("%d",&b);
	  scanf("%d",&c);
	  tripleSum=a+b+c;
	  printf("%d\n",tripleSum);
	 }
	 if (n==3){
	  scanf("%d",&a);
	  scanf("%d",&b);
	  product=a*b;
	  printf("%d\n",product);
	 }
	 if (n==0){
	  if (sum<tripleSum && sum<product){
	   printf("%d\n",sum);
	  }
	  if (tripleSum<product && tripleSum<sum){
	   printf("%d\n",tripleSum);
	  }
	  if (product<tripleSum && product<sum){
	   printf("%d\n",product);
	  }
	  return 0;
	 }
	}
}
