#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>


int operation (int qnt, char op, char *c, ...) 
{
	
	va_list lista_arg;

	va_start(lista_arg, c);

	if (strcmp("fibonacci", c) == 0) {

		int a, b, aux, cont, var;

		aux = 0;
		cont = 0;
		a = 0;
    		b = 1;

    	cont = 1;

    	for (int i = 2; i < qnt; i++) {

            aux = a + b;
            a = b;
            b = aux;

            if (op == 1) {
        		cont = cont + b;
        	}

        	else if (op == 2) {
        		cont = 0;
        		cont = cont * aux;
        	}

        }
    	
    	printf("%d\n", cont);
	}

	else if (strcmp("pa", c) == 0) {
		int init, razao, aux, cont;

		aux = 0;
		cont = 0;

		init = va_arg(lista_arg, int);

		razao = va_arg(lista_arg, int);

		
		while (aux < qnt) {

			if (op == 1) {
        		cont = cont + init;
        	}
        	else if (op == 2) {

        		cont = 0;

        		cont =  cont * init;
        	}

			init = init + razao;

			aux++;

		}

		printf("%d\n", cont);		

		va_end(lista_arg);

	}

	else if (strcmp("pg", c) == 0) {
		int init, razao, aux, cont;

		int *arr;

		arr = malloc(qnt * sizeof(int));

		cont = 1;

		init = va_arg(lista_arg, int);

		razao = va_arg(lista_arg, int);

		for (int i = 0; i < qnt; i++) {

			//printf("%d ", init);

			if (op == 1) {
				cont = init;
        		cont = cont - init;
        	}
        	else if (op == 2) {
        		arr[i] = init;
        	}
        	

			init = init * razao;

		}

		for (int i = 0; i < qnt; i++) {
			cont *= arr[i];
		}

		free(arr);

		printf("%d\n", cont);

		va_end(lista_arg);
	
	}


}


int main(int argc, char *argv[]) 
{
	
	int qnt;

	int op;

	qnt = atoi(argv[1]);

	if (argv[2][0] == '+')  {
		op = 1;
	}
	else if (argv[2][0] == 'x') {
		op = 2;	
	}


	if (strcmp("fibonacci", argv[3]) == 0) {
		operation(qnt, op, argv[3]);

	}
	else if (strcmp("pa", argv[3]) == 0) {
		int razao;
		int init;

		init = atoi(argv[4]);
		razao = atoi(argv[5]);

		operation(qnt, op, argv[3], init, razao);
		 	
	}
	else if (strcmp("pg", argv[3]) == 0) {
		int razao;
		int init;

		init = atoi(argv[4]);
		razao = atoi(argv[5]);

		operation(qnt, op, argv[3], init, razao);
	}


	

	return 0;
}