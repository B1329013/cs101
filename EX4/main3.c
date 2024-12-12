#include <stdio.h>

int main() {
    for (int n = 1; n <= 81; n++) {
        int a = (n - 1) / 9 + 1;
        int b = n % 9;
        if (b == 0) {
            printf("%d * 9 = %d\n", a, a * 9);
        }
        else {
            printf("%d * %d = %d  ", a, b, a*b);
        }
    }
    return 0;
}
