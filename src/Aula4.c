#include <stdio.h>
#include <stdlib.h>

int menu();
void quadrado();
void retangolo();

int main() {
    int senha, userid;
    char sn, op;
    system("clear");
    
    printf("\nSeja bem vindo");
    op = menu();
    do {
        if (op == 1 ) quadrado();
        if (op == 2 ) retangolo();
        }while (op!=4);
        
        
        return 0;
}

int menu() {
    int op;
      printf("Menu de opcoes");
                printf("\n1.Quadrado");
                printf("\n2.Retangulo");
                printf("\n3.Triangulo");
                printf("\n4.Encerrar");
                printf("\nSua opcao: ");
                scanf("%d", &op);
                fflush(stdin);
                return op;
}

void retangulo() {
    float m1, area, perimetro, m2;
    system("cls");
    printf("Calculando a area de um retagulo");
    printf("\n\nDigite o comprimento do lado: ");
    scanf("%f", &m1);
    area = m1*m2;
    perimetro = 2* m1 + 2 * m2;
    printf("\n\nArea: %f", area);
    printf("\nPerimetro: %f", perimetro);
}
