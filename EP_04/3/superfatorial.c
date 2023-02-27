#include <stdio.h>
//#include "superfatorial.h"

long superfatorial(int n) {
    if (n==1){
    	return 1;
    } else if (n==2){
    	return 2;
    }else{
    	long fatorial=1;
    	for(int i=n; i>=2; i--){
     		fatorial=fatorial*i;
    	}
    	return fatorial * superfatorial(n-1);
    }
}

int main() {
	int n=4;
	printf("%ld", superfatorial(n));
	return 0;
}
