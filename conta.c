#include <stdio.h>

int solution (int number) {

	int sol = 0;
	if (number % 2) {
		sol = 1;
		return sol;
	}
	else {
		
		return sol;
	}
}

int main(void) 
{

	int c_cases;
	int number;

	scanf("%d", &c_cases);

	do {
		scanf("%d", &number);
		printf("%d\n", solution(number));
		c_cases--;
	} while(c_cases > 0);
	
	return 0;
}