#include <stdio.h>

int main(void) 
{ 
	int size;
	int number_cases;
	int key_number;
	

	puts("number cases:");
	scanf("%d", &number_cases);
	puts("keys:");
	scanf("%d", &key_number);
	puts("size:");
	scanf("%d", &size);
	int address[size];
	

	puts("addresses:");
	//input addresses
	for (int i = 0; i < size; i++) 
	{
		scanf("%i", &address[i]);
	}
	puts("\n");
	puts("addresses entered:");
	for (int i = 0; i < size; i++) 
	{
		printf("%i ", address[i]);
	}  
	puts("\n");
	int mod[size];
	puts("keys: ");
	//keys value [mod]
	for (int i = 0; i < size; i++) 
	{
		mod[i] = address[i] % key_number;
	}
	for (int i = 0; i < size; i++) 
	{
		printf("%i ", mod[i]);
	}
	puts("\n");
	int keys[key_number];
	int matriz[keys[13]][9];
	/* testar esse trecho em um codigo separado
	matriz[keys[0]][3] = 13;
	for (int i; i < 13; i++) 
	{
		for (int j; i < 13; )
	}
	 */
	

	puts("total keys: ");
	int i;
	while (i < key_number) 
	{
		keys[i] = i;
		i++;
	}

	//showing table
	for (int i = 0; i < key_number; i++) 
	{
		printf("%i", keys[i]);
		puts(" -> /");


	}


	
	


	return 0;
}