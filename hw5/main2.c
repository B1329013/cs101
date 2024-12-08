#include <stdio.h>
#include <math.h>

int main() {
    double PI = 4.0f;
    int x = 1;
    int sign = -1;
    
    for (int i = 3; ; i += 2, x++) {
        PI += sign *(4.0 / i);
        sign = -sign;
        
        if (fabs(PI - 3.14159) < 0.00001) {
          break;  
        }
       
    }
    printf("PI = %.5f\n", PI);
    printf("最小的x = %d\n", x+1);
    return 0;
}
