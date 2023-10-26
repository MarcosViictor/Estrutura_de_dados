#include <stdio.h>
#include <stdlib.h>

int numero_positivo(void);


int main (){
    system("cls");

    int num = numero_positivo();
    printf("Seu numero positivo: %d\n", num);
    return 0;
}

int numero_positivo(void){
    int num;
    do{
        printf("Digite seu numero positivo:");
        scanf("%d", &num);
    }while(num < 0);
    return num;
}