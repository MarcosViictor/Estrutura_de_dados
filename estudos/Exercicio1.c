#include <stdio.h>
#include <stdlib.h>

float vetor (void);


int main (){
    system ("cls");

    float valor_vetor = vetor();
    printf("Essa é a sua média: %f\n", valor_vetor);

    return 0;
}


float vetor (void){
    float nota [3];
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota[0]);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota[1]);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota[2]);

    float media = (nota[0] + nota[1] + nota[2]) / 3.0;
    return media;
}