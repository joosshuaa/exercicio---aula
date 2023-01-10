#include <stdio.h>
/*Ler salario de uma pessoa e calcule o novo salário considerando que esta pessoa
terá um ajuste de 10%*/

int main(){
    float salario_atual;
    float novo_salario;
    float reajuste;

    printf("informe o salario atual: ");
    scanf("%f", &salario_atual);

    printf("Qual a porcentagem do reajuste: ");
    scanf("%f", &reajuste);
   
    novo_salario = salario_atual + (salario_atual*reajuste);
    printf("Novo Salario : R$ %1.2f\n", novo_salario);
	
    return 0;
}