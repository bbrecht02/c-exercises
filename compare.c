#include <stdio.h>

int main() { 

	//declarando as variaveis 
    char a[10];
	char b[10];
	int retorno, i;
	
	//solitando as palavras para o usuario 
	printf("Digite duas palavras para comparar: ");
	printf("\n");		
	//inputs
	scanf("%s", a);
	scanf("%s", b);

	//compararando e validando as strings
	for (i = 0; i < 10; i++) {
	        if (a[i] == b[i]) {
			printf("iguais!");
			return 0;
		} 	
		if (a[i] != b[i]) {
			if (a[i] > b[i]) {
				printf("A segunda string vem antes!");
				return 1;
			}
		if (a[i] < b[i]) {
			printf("A primeira string vem antes!");
			return -1;
		}
		
		
		
		} 
	
	
	
	
	}
	
	/* if (retorno = strcmp(a, b) == -1) {
	       printf("A primeira string vem antes!");
       	       return -1;
	}

	if (retorno = strcmp(a, b) == 1) { 
		printf("A segunda string vem antes!");
		return 1;
	
	} */	       
		
	
}
