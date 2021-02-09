#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pilha {
	char data;
    	struct pilha *next;
    	struct pilha *top;    
};

int size = 0;
int g = 0;


void start (struct pilha *p) 
{

    	struct pilha *aux;
    	aux = (struct pilha*)malloc(sizeof(struct pilha));
    	p->top = aux;
}

void push (struct pilha *p, char num) 
{

    	struct pilha *aux;
    	aux = (struct pilha*)malloc(sizeof(struct pilha));
    	aux->next = p->top;
    	aux->data = num;
    	p->top = aux;
    	size++;
    
}

void pop(struct pilha *p) 
{

    	if (p->top == NULL) {

		        puts("NULL");
                
    	} else {

        	    struct pilha *aux;
        	    aux = p->top;

        p->top = p->top->next;

        size--;

        free(aux);
    } 
}


void purgestack(struct pilha *p) 
{
    
    	struct pilha *aux;
    	aux = p;

        while (aux != NULL) {

                p = aux->next;
                free(aux);
                aux = p;
    }

}


void paren () 
{


        struct pilha *p;

        p = (struct pilha*)malloc(sizeof(struct pilha));

        start(p);

        int cont = 0;

        char input[255];


        fgets(input, 255, stdin);

        for (int i = 0; i < strlen(input); i++) {

                if (input[0] == ')' || input[0] == ']' || input[strlen(input)]
                == '(' || input[strlen(input)] == '[') {
                        cont++;
                        break;
                }

                else if (input[i] == '(' || input[i] == '[') {

                        push(p, input[i]);
                }

                else if ((input[i] == ')' && p->top->data  == '(' )|| (input[i] 
                == ']' && p->top->data == '[')) {

                        pop(p);
                }

                else if ((input[i] == ')' || input[i] == ']' ) && size == 0) {
                        cont++;
                        break;
                }
        }

        if (g != 0) {

                if (size == 0 && cont == 0) {
                        printf("Yes\n");
                        
                } else {
                        printf("No\n");  
                }

        }

        size = 0;
        cont = 0;
        g = 1;
    
        purgestack(p);

}


int main (void) 
{
    
        int qnt = 0;

        scanf("%d", &qnt);
    
        for (int i = 0; i < qnt + 1; i++) {
                paren();
        }


        return 0;
    
}

