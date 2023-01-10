#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que leia o valor de uma conta e calcule a porcentagem do
garçom.*/

int main(){
    float valor_da_conta;
    float porcentagem = 5;
    float porcentagem_do_garcom;

    printf("Qual o valor da conta: ");
    scanf("%f", &valor_da_conta);

 /*   printf("Qual a porcentagem do garcom: ");
    scanf("%f", &porcentagem);*/

    porcentagem_do_garcom = (valor_da_conta/100) * porcentagem ;
    printf("Porcentagem do garcom: %1.0f %%", porcentagem_do_garcom);

    return 0;
}