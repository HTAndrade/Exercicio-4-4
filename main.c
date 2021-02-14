#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
4 - Escreva um programa que permute o conteudo de duas variaveis sem utilizar uma
    variavel auxiliar.
*/

float TipoTriangulo(float A, float B, float C) { {

    if(A==B & B==C)
    printf("O triangulo eh Equilatero.");
    else if(A==B||A==C||B==C)
    printf("O triangulo eh Isoceles.");
    else
    printf("Triângulo eh Escaleno");

    }

return 0;

}

int main() {

float A,B,C;

printf("Digite o tamanho do lado A de seu triangulo: ");
scanf("%f",&A);

printf("Digite o tamanho do lado B de seu triangulo: ");
scanf("%f",&B);

printf("Digite o tamanho do lado C de seu triangulo: ");
scanf("%f",&C);

if(A < (B+C) & B < (A+C) & C < (A+B)) /* verifica se é um triangulo */
TipoTriangulo(A,B,C);

}