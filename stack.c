// SPDX-License-Identifier: GPL-3.0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 10


struct pilha {

	int stack[max];
	int top;
};


void start_stack(struct pilha *p)
{
	p->top = -1; // inicializacao da struct pilha
}

//checagens da struct pilha
int isEmpty(struct pilha *p)
{
	if (p->top == -1)
		return 1;

	else
		return 0;
}

int isFull(struct pilha *p)
{
	if (p->top == max-1)
		return 1;

	else
		return 0;
}

// insercao

int push(struct pilha *p, int num)
{
	if (isFull(p) != 1) {
		p->top++;
		p->stack[p->top] = num;

	} else {
		puts("stack is full");
	}
}

//remorcao
int pop(struct pilha *p)
{

	int aux;

	if (isEmpty(p) != 1) {
		aux = p->stack[p->top];
		p->top--;
		return aux;

	} else {
		puts("stack is empty");
	}
}

void print(struct pilha *p)
{

	int aux = p->top; //guardo o valor atual do topo da struct pilha

	if (isEmpty(p) == 1) {
		puts("stack is empty");

	} else {
		while (p->top > 0) {
			printf("%d ", p->stack[p->top]);
			p->top--;
		}

		printf("%d", p->stack[p->top]);
		printf("\n");
		p->top = aux; //volto o valor anterior do topo
	}
}


int main(void)
{
	struct pilha *p = malloc(sizeof(struct pilha));

	start_stack(p);
	int num;
	char usr[13];

	while (1) {

		scanf("%s", usr);

		if (strcmp(usr, "Empilhar") == 0) {
			scanf("%d", &num);
			push(p, num);

		} else if (strcmp(usr, "Desempilhar") == 0) {
			pop(p);


		} else if (strcmp(usr, "Imprimir") == 0) {
			print(p);

		} else if (strcmp(usr, "Finalizar") == 0) {
			free(p);
			return 0;
		}
	}
}
