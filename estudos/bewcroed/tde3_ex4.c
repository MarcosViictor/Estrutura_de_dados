#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numeros[15];
    int par[5], impar[5];
    int contPar = 0, contImpar = 0;

    // Leitura dos 15 números inteiros
    for (int i = 0; i < 15; i++) {
        scanf("%d", &numeros[i]);

        // Verifica se o número é par ou ímpar e armazena no vetor correspondente
        if (numeros[i] % 2 == 0) {
            par[contPar] = numeros[i];
            contPar++;
        } else {
            impar[contImpar] = numeros[i];
            contImpar++;
        }

        // Se o vetor par estiver cheio, imprime e reinicia
        if (contPar == 5) {
            for (int j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, par[j]);
            }
            contPar = 0;
        }

        // Se o vetor ímpar estiver cheio, imprime e reinicia
        if (contImpar == 5) {
            for (int j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, impar[j]);
            }
            contImpar = 0;
        }
    }

    // Imprime o restante dos elementos nos vetores par e ímpar
    for (int i = 0; i < contImpar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < contPar; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
