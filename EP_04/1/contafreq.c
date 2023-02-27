#include <stdio.h>
//#include "contafreq.h"

int contafreq(int num, int digito) {
	int num0=num, num1=num, num2=num, num3=num,num4=num,num5=num;
	if(num==digito){
		return 1;
	}
	if(num<(digito+1)*10 && num>digito*10){
		while (num>=10){
			num=-10;
		}
		return 1 + contafreq(num, digito);
	}
	if(num<(digito+1)*100 && num>digito*100){
		while (num>=100){
			num=-100;
		}
		return 1 + contafreq(num, digito);
	}
	if(num<(digito+1)*1000 && num>digito*1000){
		while (num>=1000){
			num=-1000;
		}
		return 1 + contafreq(num, digito);
	}
	if(num<(digito+1)*10000 && num>digito*10000){
		while (num>=10000){
			num=-10000;
		}
		return 1 + contafreq(num, digito);
	}
	if (num>=10000){
		while (num>=10000){
			num=-10000;
		}
		return 0 + contafreq(num,digito);
	}
	if (num>=1000){
		while (num>=1000){
			num=-1000;
		}
		return 0 + contafreq(num,digito);
	}
	if (num>=100){
		while (num>=100){
			num=-100;
		}
		return 0 + contafreq(num,digito);
	}
	if (num>=10){
		while (num>=10){
			num=-10;
		}
		return 0 + contafreq(num,digito);
	}
	return 0;
}

int main() {
	int num=33333, digito=3;
	printf("%d\n", contafreq(num, digito));
	return 0;
}