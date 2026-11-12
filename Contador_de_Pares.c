#include<stdio.h>
int main(){
    int limite, i = 1, pares;
    printf("Digit um numero limite: ");
    scanf("%d", &limite);
    while(i <= limite){
        if(i % 2 == 0){
            pares++;
        } i++;
    } printf("A quantidade de numeros pares eh: %d", pares);
return 0;
}
