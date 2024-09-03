#include <stdio.h>

#include <stdlib.h>
int main()
{
    int senha,userid;
    char sn,op;
    float m1,m2,area,perimetro;
    printf("Digite seu número de usuário: ");
    scanf("%d", &userid);
    printf("Digite a sua senha: ");
    scanf("%d", &senha);
    if (senha==294540 && userid == 0 || senha==294541 && userid == 1)
    {
        printf("Seja bem vindo ao sistema");
        printf("\n\nDeseja continuar (S/N) ?");
        sn=getchar();
        if(65+sn%65%32 == 'S')
        {
            printf("\nDeseja calcular a area de algum polígono (s/n) : ");
            sn=getchar();
            if (65+sn%65%32 == 'S')
            {
                system("cls");
                printf("Menu de opcoes");
                printf("\n1.Quadrado");
                printf("\n2.Retangulo");
                printf("\n3.Triangulo");
                printf("\n4.Encerrar");
                printf("\nSua opcao: ");
                op = getchar();
                if(op == '1')
                {
                    system("cls");
                    printf("Calculando a area de um quadrado");
                    printf("\n\nDigite o comprimento do lado: ");
                    scanf("%f", &m1);
                    area = m1*m1;
                    perimetro = 4*m1;
                    printf("\n\nArea: %f", area);
                    printf("\nPerimetro: %f", perimetro);

                }

            }
            else {
                printf("Que pena! Essa é a única coisa que sei fazer, tchau...");
            }
        }
    }
    else {
        printf("Cai fora, Boca aberta!!");
    }
    return 0;
}