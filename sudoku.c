// SPDX-License-Identifier: GPL-3.0
#include <stdio.h>
#include <stdlib.h>

void print_m(int **mat)
{
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
			printf("%d ", mat[i][j]);
		printf("\n");
	}
}

int check_lines_colums(int **mat)
{
	int check = 1;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				if (mat[i][j] == mat[i][k] && j != k)
					check = 0;
			}
		}
	}

	check = 1;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 9; k++) {
				if (mat[i][j] == mat[k][j] && i != k)
					check = 0;
			}
		}
	}

	return check;
}

int check_quadrant(int **mat)
{
	int check = 1;

	for (int n = 1; n <= 9; n++) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (mat[i][j] == n)
					check = 0;
			}
		}
	}
	return check;
}

int make_quadrant(int **mat)
{
	int **quadrant = malloc(4 * sizeof(int *));

	for (int i = 0; i < 3; i++)
		quadrant[i] = malloc(4 * sizeof(int));

	for (int i = 0; i < 9; i += 3) {
		for (int j = 0; j < 9; j++) {
			for (int k = 0; k < 3; k++) {
				for (int l = 0; l < 3; l++)
					quadrant[k][l] = mat[k + 1][l + 1];
			}
			if (check_quadrant(quadrant))
				return 0;
		}
	}

	for (int i = 0; i < 3; i++)
		free(quadrant[i]);
	free(quadrant);

	return 1;
}

int main(int argc, char **argv)
{
	FILE *fp;

	fp = fopen(argv[1], "r");

	fseek(fp, 0, SEEK_SET);

	//Matrix reading && allocation
	int **mat = malloc(10 * sizeof(int *));

	for (int i = 0; i < 9; i++)
		mat[i] = malloc(10 * sizeof(int));

	char item;
	int n;
	int i = 0;
	int j = 0;
	int cont = 0;

	do {
		item = fgetc(fp);
		if (item == ',') {
		} else if (item == '\n') {
			i++;
			j = 0;
		} else {
			n = atoi(&item);
			mat[i][j] = n;
			j++;
		}
	} while (!feof(fp));

	fclose(fp);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (mat[i][j] < 1 || mat[i][j] > 9)
				cont++;
		}
	}

	if (check_lines_colums(mat))
		if (make_quadrant(mat) && cont == 0)
			puts("True");
		else
			puts("False");
	else
		puts("False");

	for (int i = 0; i < 9; i++)
		free(mat[i]);
	free(mat);

	return 0;
}
