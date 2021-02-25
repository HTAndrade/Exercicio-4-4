#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
4 - Escreva um programa que permute o conteudo de duas variaveis sem utilizar uma
    variavel auxiliar.
*/

int main(){

int x, y;

printf("Digite os valores x e y: \n");
scanf("%i %i", &x, &y);

x=x+y;
y=x-y;
x=x-y;

printf("x = %i  y = %i \n", x, y);

}