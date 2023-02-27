#include <stdio.h>

int main() {
    int num[5];
    int i, soma;

    for(i=0; i<5; i++){
        printf("Entered a int data: ");
        scanf("%d", &num[i]);
    }

    soma = num[0] + num[1] + num[2] + num[3] + num[4];
    printf("Total: %d", soma);
    return 0;
}
