#include <stdio.h>

int main() {
    printf("Calculadora VSD\n");
    printf("Qual é a operação que deseje realizar?");
    printf("Operação disponiveis:\n");
    printf("Soma (+)\nSubtração(-)\nMultiplicação (*)\nDivisão (\)\n");


    
    char operacao;
    int n1, n2;

    scanf("%c", &operacao);
    printf("Digite dois Números: ");
    scanf("%d %d", &n1, &n2);

    if (operacao == '+') {
        printf("Operação escolhida foi a adição\n");
        int soma = n1 + n2;
        printf("%\n", soma);
    } 
    else if (operacao == '-') {
        printf("Operação escolhida foi a subtração\n");
        int soma = n1 - n2;
        printf("%\n", soma);
    } 
    else if (operacao == '*') {
        printf("Operação escolhida foi a multiplicação\n");
        int soma = n1 * n2;
        printf("%\n", soma);
    } 
    else if (operacao == '/') {
        printf("Operação escolhida foi a divisão\n");
        int soma = n1 / n2;
        printf("%\n", soma);
    } 
    else {
        printf("Por favor, tente novamente digitando os digitos corretos\n");


    }
    return 0;
    
}