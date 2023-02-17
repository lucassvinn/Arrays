#include <stdio.h>

int main() {
    int v[5];
    float m;

    v[0] = 50;
    v[1] = 77;
    v[2] = 40;
    v[3] = 25;
    v[4] = 10;

    m = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("%f\n", m);
    return 0;
}
