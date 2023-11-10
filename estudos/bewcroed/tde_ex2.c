#include <stdio.h>

int main(){
    int v, N [10];

    scanf("%i", &v);

    N [0] = v;

    for(int i = 1; i < 10; i++){
        N[i] = 2 * N[i - 1];
    }
    
     for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}