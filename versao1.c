#include <stdio.h>

int main() {
 
int pessoas;
int carne;
int linguica;
int garrafa;

printf("\nDigite o numero de pessoa: ");
scanf("%d", &pessoas);
carne = pessoas*400;
linguica = pessoas*100;
garrafa = pessoas*3;

printf("\no numero de carne é %d", carne);
printf("\no numero de linguiça é %d", linguica);
printf("\no numero de garrafa é %d", garrafa);

return 0;

}
