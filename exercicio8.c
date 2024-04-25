#include <stdio.h>
#include <stdlib.h>

int main(){

/*
Faça um programa que calcule o fatorial de um número a ser
digitado.
*/

    int numero; 
    int resultado=1;
    int contador;

    printf("Insira um numero:\n");
    scanf("%i" &numero);

    contador = numero;
    while(contador > 1){

        resultado = contador * resultado;
     
        contador--;
    }
    printf("%i", resultado);



return 0;
}
