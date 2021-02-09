#include <stdio.h>
#include <stdlib.h>

#define full 100

typedef struct node
{
	int data;
	struct node *next;	
	
}node;

typedef struct queue 
{
	node *top;
	node *tail;
	int cont;
}queue;

void start (queue *p) {
	p->top = 0;
	p->tail = NULL;
	p->cont = NULL;
}

int isempty (queue *p) {

	return (p->tail == NULL);
}

int enfi (queue *p, int num) {

	if (p->cont < full) {

		node *aux = malloc(sizeof(node));

		aux->data = num;
		aux->next = NULL;

		if (!isempty(p)) {

			p->tail->next = aux;
			p->tail = aux;
		}
		else {

			p->top = aux;
			p->tail = aux;
		}

		p->cont++;\
	}

}


int desenfi (queue *p) {
	node *aux;
	int num;
	num = p->top->data;

	aux = p->top;
	p->top = p->top->next;
	p->cont--;

	free(aux);

	return num;
}

void print (node *top) {
	
	if (top != NULL) {

		printf(" %d",top->data);
		print(top->next);
	}
}


int main (void) 
{

	struct queue *p = malloc(sizeof(struct queue));
	queue *cont;

    start(p);



	enfi(p, 5);
	enfi(p, 9);
	enfi(p, 4);
	enfi(p, 6);	
	desenfi(p);

	print(p->top);
	puts("\n");



	return 0;
}

