#include <stdio.h>

int main() {
    int num[5];
    int i, total;
    float average;

    for(i=0; i<5; i++){
        printf("Entered a int data: ");
        scanf("%d", &num[i]);
    }

    total = num[0] + num[1] + num[2] + num[3] + num[4];
    average = total / 5;
    printf("Total: %d\n", total);
    printf("Media: %2.f", average);
    return 0;
}
