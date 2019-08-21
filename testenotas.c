/*Escreva um programa que determina se o
aluno foi ou não aprovado na disciplina. Não
esqueça de considerar a situação de segunda
chamada e final. Considere que uma nota
negativa indica que o aluno faltou a
avaliação */






#include <stdio.h>

int main() {
        float av1;
        float av2;
        float av3;
        float final;
        float media;
        float mediapf;
        
        
        printf("digite sua nota da av1: (coloque -1 caso tenha faltado a prova ) ");
        scanf("%f", &av1);
        if (av1 == -1) {
            printf("nota da segunda chamada: ");
            scanf("%f", &av1);
        }
        printf("digite sua nota da av2: (coloque -1 caso tenha faltado a prova) ");
        scanf("%f", &av2);
        if (av2 == -1) {
            printf("nota da segunda chamada: ");
            scanf("%f", &av2);
        }
        printf("digite sua nota da av3: (coloque -1 caso tenha faltado a prova) ");
        scanf("%f", &av3);
        if (av3 == -1) {
            printf("nota da segunda chamada: ");
            scanf("%f", &av3);
        }

        media = (av1 + av2 + av3)/3;
        if (media < 7) {
            printf("nota da final: ");
            scanf("%f", &final);
            mediapf = (media + final)/2;
            if (mediapf >= 5) {
                printf("Aprovado");
            }
            else {
                printf("Reprovado");
            }
            printf("\nMedia: %f", mediapf);
        
        }
        if (media >= 7) {
            printf("Aprovado");
            printf("\nMedia: %f", media);

        }
        return 0;
}