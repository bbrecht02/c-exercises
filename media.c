#include <stdio.h>

int main() {
    int num1;
    int num2;
    int num3;
    int media;
    printf("type a number: ");
    scanf("%d", &num1);
    printf("type a number: ");
    scanf("%d", &num2);
    printf("type a number: ");
    scanf("%d", &num3);


    media = (num1 + num2 + num3)/3;
    printf("resultado: %d", media);





    return 0;

}