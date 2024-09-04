#include <stdio.h>
#include <stdlib.h>
// esse codigo é um lopi de tentativas, se 

int main() {
    int resposta = 500, chute;
    printf("qual é o numero? ");
    scanf("%d", &chute);
    while (chute !=resposta)
    {
        printf("\nTente de novo: ");
        scanf("%d", &chute);

    }
    printf("parabens");
    return 0;
    

}