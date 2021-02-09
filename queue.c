#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 10

typedef struct fila
{
		int fila[max];
		int top;
		int tail;
		int cont;

} queue;

void start (queue *p) 
{
	
		p->top = 0;
		p->tail = 0;
		p->cont = 0;
}

int isempty (queue *p) 
{

		return p->cont == 0;
}


int isfull (queue *p) 
{

		return p->cont == max;
}

void push (queue *p, int num) 
{

		p->fila[p->tail] = num;
		p->tail++;


		p->cont++;
}

int pop (queue *p) 
{

		int aux;
		aux = p->fila[p->top++];

		p->cont--;


		return aux;
}

void print (queue *p) 
{

		int aux = p->top;

		while (p->top <= p->tail-2) {
				printf("%d ", p->fila[p->top]);
				p->top++;
	}
			printf("%d", p->fila[p->top]);
			p->top = aux;
			printf("\n");
}

int main(void) 
{
	
		queue *p = malloc(sizeof(queue));
    	start(p);

    	int num;
    	char usr[13];

    	while (1) {

        		scanf("%s", &usr);
                
        		if (strcmp(usr, "Enfileirar") == 0) {

            				scanf("%d", &num);
            				push(p, num);
                            
        		} else if (strcmp(usr, "Desenfileirar") == 0) {

            			pop(p);
        		} else if (strcmp(usr, "Imprimir") == 0) {

            			print(p);

        	} else if (strcmp(usr, "Finalizar") == 0) {

            			return 0;
        	}
    	}
}
