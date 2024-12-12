#include <stdio.h>

int main() {
    double PI = 4.0;
    int x = 1;
    int sign = -1;
    
    for (int i = 3; ; i += 2, x++) {
        PI += sign * (4.0 / i);
        sign = -sign;
        
        if (PI >= 3.141585 && PI < 3.141595) {
          break;
            
        }
    }
    printf("PI = %.5f\n", PI);
    printf("最小的x = %d", x+1);
    return 0;
}
