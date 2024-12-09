#include <stdio.h>

int main() {
    int i = 12345
    if (i < 10) {
       printf("%d\n", i * 1000); 
    }
    else if (i < 100) {
        int a = i % 10;
        printf("%d\n", a * 1000 + i - a);
    }
    else if (i < 1000) {
        int b = i % 10;
        printf("%d\n", b * 1000 + i - b);
    }
    else {
        int c = i / 10000;
        int d = i % 10000;
        int e = d / 1000;
        int f = d % 10;
        int g = d % 1000;
        printf("%d\n", c * 10000 + f * 1000 + g - f + e);
    }
    return 0;
}
