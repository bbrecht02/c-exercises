// SPDX-License-Identifier: GPL-3.0
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define full 100

typedef struct node {
	int data;
	struct node *next;	
	
} node;

typedef struct queue {
	node *head;
	node *tail;
	int cont;

} queue;

void start (queue *p) 
{
	p->head = 0;
	p->cont = 0;
	p->tail = NULL;
}

int isempty (queue *p) 
{
	return (p->tail == NULL);
}


void push (queue *p, int num) 
{
	if (p->cont < full) {
		node *aux = malloc(sizeof(node));
		aux->data = num;
		aux->next = NULL;

		if (!isempty(p)) {

			p->tail->next = aux;
			p->tail = aux;

		} else {

			p->head = aux;
			p->tail = aux;
		}
		p->cont++;
	}
}


node* search (int num, queue* p) 
{
	node *aux;
	aux = p->head;

	while (aux != NULL && aux->data != num) {
		aux = aux->next;
	} 
	return aux;
}


void pop_init(queue *p) 
{
	if (!isempty(p)) {
		node *aux = p->head;
		p->head = aux->next;
		free(aux);
		p->cont--;
	}
}


int pop (queue *p, int num) 
{
	node *aux; 
	node *prev;

	aux = p->head;
	prev = NULL;
	int c = 0;

	if (num == aux->data) {
		pop_init(p);

	} else {
		while (aux != NULL) {
			if (aux->data == num) {
				prev->next = aux->next;
				p->cont--;
				free(aux);
				return 1;
			}
			prev = aux;
			aux = aux->next;
		}	
	}

	if (prev != NULL) {
		if (prev->data == num) {
			prev = aux->next;
			free(aux);
		}
	}
}

void print (node *head) 
{	
	if (head != NULL) {
		printf("%d ", head->data);
		print(head->next);
	}
}


int main (void) 
{

	struct queue *p = malloc(sizeof(struct queue));

	start(p);


	// input
	char usr; //parada e espacamento
	char usr_2; 
    
	int num; //fila entrada 
	int out; //fila saida
	int count = 0;
	int aux = 0;

	int arr[10];
		


	//insert 
	while (usr != '\n') {
		scanf("%d%c", &num, &usr);
		push(p, num);
    	}

	// out
	int i = 0;

	while (usr_2 != '\n') {

		scanf("%d%c", &out, &usr_2);
		
		if (isdigit(out) == 0) {		
			arr[i] = out;
			i++;
			count++;
		}
	}
	for (int i = 0; i < count; i++) {

		if (search(arr[i], p) == NULL) {

			puts("Impossivel tirar pessoa inexistente da fila");
			return 0;
		}
	}
	if (count > p->cont) {

		puts("Fila de saida maior que a de entrada");
		return 0;
	}
	int j = 0;

	while (j < count) {

		pop(p, arr[j]);
		j++;
	}

	print(p->head);
	return 0;
}
