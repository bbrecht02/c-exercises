#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Node {
		int data;
		struct Node* left;
		struct Node* right;
	
	}node;

node* create_tree(int data) {
		node* root;

		root = (node*)malloc(sizeof(node));
		root->data = data;
		root->left;
		root->right;

		return root;
	} 

int defth(node* tree, int data, int profun) {
	if (tree == NULL) {
		return 0;
	}

	else if (data == tree->data) {
		return profun;
	}
	
	else if (data <= tree->data) {
			defth(tree->left, data, profun+1);
	}
	else if (data > tree->data) {
			defth(tree->right, data, profun+1);	
	}
}

node* insert(long data, node* tree) {
	if (tree == NULL) {
		return create_tree(data);
	}
	else {
		if (data <= tree->data) {
			tree->left = insert(data, tree->left);
		}
		else {
			tree->right = insert(data, tree->right);
		}
	}
	return tree;
}

void pre_order(node* x) {

	if (x != NULL) {
		printf(" %d", x->data);
		pre_order(x->left);
		pre_order(x->right);		
	}
}


int main(void) 
{

	int x;
	node* root;
	char *string = malloc(100 * sizeof(char));
	char *ptr;
	int *arr = malloc(100 * sizeof(int));
	int j = 0;

	scanf("%s", string);

	ptr = string;
   
	while (*ptr) {

    	if (isdigit(*ptr)) {


       	 	long data = strtol(ptr, &ptr, 10);
        	arr[j] = data;
        	j++;
    	} 	
		else {
			ptr++;
    	}
	}

	//printf("%ld\n", (sizeof(arr)/sizeof(arr[0]);

	for (int i = 0;i < j;i++) {

		root = insert(arr[i], root);
		//printf("%d\n", arr[i]);

	}

	//pre_order(root);

	int aux;

	scanf("%d", &aux);

	x = defth(root, aux, 1);

	if (x) {
		printf("ESTA NA ARVORE\n%d", x-1);
	}
	else {
		printf("NAO ESTA NA ARVORE\n-1");	
	}

	
}