#include <stdio.h>

int main(void) 
{

	printf("Oct\tDec\tHex\tChar\n");

	for(int i = 0; i < 128; i++) {
		printf("%03o\t%d\t%02x\t%c\n", i,i,i,i);
	}



	return 0;
}