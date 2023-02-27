#include <stdio.h>
int main() {
 int N, C=0, a, b, descending=0;
 scanf("%d", &N);
 for (N; N>0; N--){
  scanf("%d", &b);
  while(C==0){
   a=b-1;
   C++;
  }
  if (a>b){
   descending++;
//   printf("!");
  }
  a=b;
 }
 if (descending==0){
  printf("SIM\n");
 } else {
  printf("NAO\n");
 }
 return 0;
}
