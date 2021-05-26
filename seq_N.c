#include <stdio.h>
#include <stdlib.h>


void seq (int N) {
    
    for (int i = 0; i < N; i++) {
        printf("%d ", i+1);
    }
    printf("\n");
}


int main(int argc, char const **argv)
{
    
    //Return a numbers sequence according to an int N passed by the user

    // Example:  
    // input: ./seq_N 5
    /* return: 
        1
        1 2
        1 2 3 
        1 2 3 4 
        1 2 3 4 5 
    */ 


    if (argc != 2) {
        puts("numero de argumentos invalido. insira apenas um inteiro");
        exit(1);
    }

    int N = atoi(argv[1]);
    int count = 0;

    if (N == 1) {
        printf("%d\n", N);
    }
    else {
        while (count < N) {

            seq((count+1));

            count++;
        }
    }

    

    return 0;
}
