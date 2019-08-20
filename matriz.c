#include <stdio.h>


int main() {


    int matriz01[3][3];
    int matriz02[3][3];
    int matriz03[3][3];
    int i;
    int j;

    printf("digite os valores da matriz 01: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz01[i][j]);
        }

    }
    printf("digite os valores da matriz 02: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz02[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf ("\n%d %d %d\n", i, j, matriz01[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf ("\n%d %d %d\n", i, j, matriz02[i][j]);
        }
    }

    return 0;
}