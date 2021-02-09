#include <stdio.h>

int main(void) 
{

    int teaOption;

    int usrGuess[5];

    int check_count = 0;

    scanf("%d", &teaOption);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &usrGuess[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (usrGuess[i] == teaOption) 
            check_count++;
    }
    
    printf("%d\n", check_count);




    return 0;
}