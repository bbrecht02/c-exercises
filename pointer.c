#include <stdio.h>

int main(void) {
    
    int a = 3;
	int b = 5;
	int *p = &a;
	int *q = &b;
    int c;

    c = *p + *q;

	printf("%i\n", c);



	return 0;
}