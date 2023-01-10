#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*Ler base e altura de um triângulo. Calcular e escrever 
a área (area=base*altura/2)*/

int main(){
    float base;
    float altura;
    float area;
    
    printf("Qual a base do triagulo: ");
    scanf("%f", &base);

    printf("Qual a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base*altura) / 2;
    printf("area do triangulo: %1.f", area);

    return 0;
}