#include<stdio.h>
#include<stdlib.h>

/*
5) Faça um programa que receba um número real, calcule e
exiba o quadrado dele. O programa deverá repetir esse
procedimento para 10 números, um de cada vez.
*/

int main(){
    int contador=1;
    int num;
    int conta;

    while(contador <=10){
    printf("insira um número por gentileza:\n");
    scanf("%d", &num);
       
        conta = num * num;
        printf("O valor desse número ao quadradro é: %d\n", conta);    
    
    contador++;
    }
    
    return 0;
}
