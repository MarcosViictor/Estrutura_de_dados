#include <stdio.h>

int main() {
    // Declaração de variáveis
    int N[20];

    // Leitura dos 20 valores inteiros
    for (int i = 0; i < 20; i++) {
        scanf("%d", &N[i]);
    }

    // Troca dos elementos do vetor
    for (int i = 0; i < 10; i++) {
        // Troca usando uma variável temporária
        int temp = N[i];
        N[i] = N[19 - i];
        N[19 - i] = temp;
    }

    // Exibição do vetor modificado
    for (int i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
