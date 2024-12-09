#include <stdio.h>

int main () {
    int i = 12345;
    
    if (i < 1000) {
        printf("%d\n", 999 * (i % 10) + i);
    }
    else {
        int a = (int) (i / 10000);
        int b = (i / 1000) % 10;
        int c = i % 10;
        printf("%d", a * 10000 + c * 999 + i % 1000 + b);
    }
    return 0;
}
