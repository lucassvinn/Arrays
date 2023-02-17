#include <stdio.h>

int main() {
    int prices[4];
    int i;

    for(i=0; i<5; i++){
        printf("Insira um valor:");
        scanf("%d", prices[i]);
    }

    printf("Dados inseridos:\n");

    for(i=0;i<5; i++){
        printf("%d", prices[i]);
    }
    return 0;
}
