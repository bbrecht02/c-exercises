#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{    

    int i = 0 , len = 0;
    int stack[i];
    int *pointer;
    char usr;
    //int ultimo = len - 1;
    int num;
    

    pointer = &stack[i];


    puts("qual operação deseja realizar? / empilhar / desempilhar / imprimir /  ");
    scanf("%s", &usr);

    
    if (strcmp(usr, "empilhar") == 0) 
    {

        puts("qual numero deseja adicionar? \n");
        scanf("%i", &num);
        *pointer = stack[i++];
        malloc(sizeof(stack[i]));
        stack[i-1] = num;
        len += 1;
        
    }
    if (strcmp(usr, "desempilhar") == 0) 
    {
        *pointer = stack[--i];
        len -= 1;
    }
    if (strcmp(usr, "imprimir") == 0) 
    {
        printf("%i\n", *pointer);
    }

    

    
    
    
  
    
    
    
   






    return 0;
}