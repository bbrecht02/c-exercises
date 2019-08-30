#include <stdio.h>

int main() { 

	//
	int size;
	int number_cases;
	int keys;
	char address;
	int i = 0 ;

	scanf("%d", &number_cases);
	scanf("%d", &keys);
	scanf("%d", &size);

	char hash[size];

	while (i < size -1 ) {
		scanf("%s", &address);
		i++;
	}
	hash[size] = address;
	for (int c = 0; c < size; c++) {
		printf("%d", hash[i]);
	}








		





return 0;
}
