#include <stdio.h>
//#include "dec2bin.h"

int dec2bin(int n_decimal) {
    if (n_decimal/2<=0){
    	return 1;
    } else {
    	return n_decimal%2 + 10*dec2bin(n_decimal/2);
    }
}

int main (){
	int ndecimal=7, result;
	result=dec2bin(ndecimal);
	printf("%d", result);
	return 0;
}
