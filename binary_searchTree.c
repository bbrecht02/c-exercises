#include <stdio.h>
#include <stdlib.h>

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

node* insert(int data, node* tree) {
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

node* search (node* tree, int enter) {

	node* num;

	if (tree == NULL) {
		return NULL;
	}
	
	
	else {
		if (tree->data == enter) {
			num = search(tree->left, enter);
			return tree;
		}

		else {
			num = search(tree->right, enter);
		
			return num;
		}
	}	

}


void pre_order(node* x) {

	if (x != NULL) {
		printf(" %d", x->data);
		pre_order(x->left);
		pre_order(x->right);		
	}
}

void in_order(node* x) {
	if (x != NULL) {
		in_order(x->left);
		printf(" %d", x->data);
		in_order(x->right);
	}
}

void pos_order(node* x) {
	if(x != NULL) {
		pos_order(x->left);
		pos_order(x->right);
		printf(" %d", x->data);
	}
}


int main(void) 
{
	int data;
	struct node* root;

	int number_cases;
	int amount;  
	int input;
	int n;

	scanf("%d", &number_cases);

	n = 1;

	while (n < number_cases + 1) {
		node* root = NULL;
		scanf("%d", &amount);
		for (int i = 0; i < amount; i++) {
			scanf("%d", &data);
			root = insert(data, root);
		}
		printf("Case %d:\n", n);
		printf("Pre.:");
		pre_order(root);
		printf("\n");

		printf("In..:");
		in_order(root);
		printf("\n");

		printf("Post:");
		pos_order(root);
		printf("\n\n");

		n++;
	}

	return 0;
}
