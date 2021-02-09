#include <stdio.h>

int main(void) 
{
	int matrix[3][3] = {0,0,0,
						0,0,0,
						0,0,0};

	for (int i = 0; i < 3; i ++) {
		for (int j = 0; j < 3; j ++) {
			scanf("%d", &matrix[i][j]);
		}
	}

	int linha, coluna = 0;
	for (int i = 0; i < 3; i ++) {
		for (int j = 0; j < 3; j ++) {
			printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
		}
	}


	printf("diagonal principal: %d %d %d\n", matrix[0][0], matrix[1][1], matrix[2][2]);






	return 0;
}