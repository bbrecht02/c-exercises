#include <stdio.h>
#include <stdlib.h>


int mdc(int num, int num2) {

	int aux;

	aux = num % num2;

	while(aux != 0) {
		num = num2;
		num2 = aux;
		aux = num % num2;
	}
	if (num == 0 && num2 == 0) {
		num2 = num;
	}

	return num2;
}


int main(void) {

	int a, d, qnt;

	scanf("%d", &qnt);

	int i = 0;
	while (i < qnt) {

		scanf("%d %d", &a, &d);

		printf("MDC(%d,%d) = %d\n",a, d, mdc(a, d));	

		i++;
	}

	
}