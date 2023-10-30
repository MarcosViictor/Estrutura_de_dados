#include <stdio.h>
#include <stdlib.h>

float calcular_a_media(void); //Chamar a função que está em baixo.

int main (){
    system ("cls");

    float media_valor = calcular_a_media(); //Chamando minha função.
    printf("Essa é sua Média: %f\n", media_valor);

    return 0;
}

float calcular_a_media(void){
    float nota [3]; //Defini meu array para receber 3 notas e armazenar.

    for(int i = 0; i < 3; i++){
        //Criei o meu loop usando o for para pedir 3 dados de entrada do meu user.
        printf("Digite sua nota: ");
        scanf("%f", &nota[i]);
    }

    float media = (nota[0] + nota[1] + nota[2]) / 3.0;
    return media;
}
