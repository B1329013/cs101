#include <stdio.h>

int main() {
    double PI = 4.0;
    int sign = -1;
    long ipi = 0;
    int x = 0;

    for (int i = 3; ; i += 2, x++) {
        PI += sign *(4.0 / i);
        sign = -sign;

        ipi = PI * 100000;
        if (ipi == 314159) {
            x = i;
            break;
        }
    }

    printf("%d %.5f", x, PI);
    return 0;
}
