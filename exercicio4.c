#include<stdio.h>
#include<stdlib.h>
/*
4) Crie um algoritmo que exiba todos os números pares
entre 240 e 730 inclusive.
*/
int main(){

int contador = 240;

while(contador <=720){

    if(contador %2 == 0){
    printf("contagem %d\n", contador);
    contador++;}
    else{
    contador++;
        }

}
return 0;
}
