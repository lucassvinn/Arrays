#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int i;
    float s = 0;

    for (i=0; i<5; i++) {
        s += numbers[i];
    }

    printf("%f\n", s);
    return 0;
}
