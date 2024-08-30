#include <stdio.h>
int main(){
    char sexo;
    int idade;
    float estatura, peso;

    printf("digite seu sexo (M?F)");
    sexo=getchar();
    
    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    printf("\nDigite sua estrutura (metros):");
    scanf("%f", &estatura);

    printf("\nDigite seu peso (kg):");
    scanf("%f", &peso);

    printf("\n\n\n=====================\n");
    printf("\nSexo: %c", sexo);
    printf("\nIdade: %d", idade);
    printf("\nEstrutura: %5.2f", estatura);
    printf("\nPeso: %6.2f", peso);

    float imc = peso / (estatura * estatura );

    printf("\nIMC é: %6.2f", imc); 
    printf("\n======================\n");
    
    return 0;
}