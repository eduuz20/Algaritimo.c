#include <stdio.h>

int main() {
 
int homem;
int mulher;
int carne;
int linguica;
int garrafa;
int guarana;
int queijo;

printf("\nDigite o numero de homem: ");
scanf("%d", &homem);
carne = homem*500;
linguica = homem*100;
guarana = homem*300; 
garrafa = homem*4;
queijo = homem*100;

printf("\no numero de carne é %d", carne);
printf("\no numero de linguiça é %d", linguica);
printf("\no numero de garrafa é %d", garrafa);
printf("\no numero de queijo é %d", queijo);
printf("\no numero de guarana é %d \n", guarana);



printf("\nDigite o numero de mulher: ");
scanf("%d", &mulher);
carne = mulher*300;
linguica = mulher*100;
guarana = mulher*300; 
garrafa = mulher*2;
queijo = mulher*100;


printf("\no numero de carne é %d", carne);
printf("\no numero de linguiça é %d", linguica);
printf("\no numero de garrafa é %d", garrafa);
printf("\no numero de queijo é %d", queijo);
printf("\no numero de guarana é %d \n", guarana);

return 0;

}
