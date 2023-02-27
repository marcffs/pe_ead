#include <stdio.h>
int main(){
 int x, y, n, i, primos=0;
 scanf("%d", &x);
 scanf("%d", &y);
 if(x<y){
  int z;
  z=x;
  x=y;
  y=z;
 }
 n=x;
 for (n; n>=y; n--){
  int counter = 0;
  i=n;
  for (i; i>0; i--){
   if(n%i ==0){
    counter++;
   }
  }
  if (counter==2){
   primos++;
  }
 }
 printf("primos: %d\n", primos);
 return 0;
}
