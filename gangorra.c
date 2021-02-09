#include <stdio.h>

int main (void) 
{

	//return a * b == c * d

	int a,b,c,d;
	int left, right;

	scanf("%d %d %d %d", &a, &b, &c, &d);


	left = a * b;
	right = c * d;

	if (left == right) {
		puts("0");
	}
	else if (right > left) {
		puts("1");
	}
	else if (right < left) {
		puts("-1");
	}




	return 0;
}