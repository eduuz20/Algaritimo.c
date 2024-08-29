#include <stdio.h>
int main(){
    char sexo;
    int idade;
    float estatura, peso;

    printf("digite seu sexo (M?F)");
    sexo=getchar();
    
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("\nDigite seu peso (metros):");
    scanf("%f", &estatura);

    printf("\n\n\n=====================\n");
    printf("Sexo: %c", sexo);
    printf("Idade: %d", idade);
    printf("Estrutura: %5.2f", estatura);
    printf("Peso: %6.2f", peso);
    
    
    return 0;
}