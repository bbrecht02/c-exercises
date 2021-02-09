#include <stdio.h>

int main(void) 
{
    float salary;

    scanf("%f", &salary);

    if (salary > 0.00 && salary <= 2000.00) {
        puts("Isento"); 
    }
    else if (salary > 2000.01 && salary <= 3000.00) {
        printf("R$ %.2f\n", (salary - 2000)* 0.08);
    }
    else if (salary > 3000.01 && salary <= 4500.00) {
        printf("R$ %.2f\n", ((salary - 3000)* 0.18) + 80);
    }
    else {
        printf("R$ %.2f\n", ((salary - 4500)* 0.28) + 350);
    }

    return 0;

}