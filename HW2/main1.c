#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 69
#define NUM_COUNT 7

void generate_lotto(int n) {
    FILE *fp = fopen("lotto.txt", "w");
    if (fp == NULL) {
        perror("Failed to open file");
        return;
    }

    fprintf(fp, "N = %d\n", n);
    
    srand(2025); // 固定隨機種子

    for (int i = 0; i < n; i++) {
        int numbers[MAX_NUM] = {0};
        int count = 0;
        
        while (count < NUM_COUNT) {
            int num = (rand() % MAX_NUM) + 1;
            if (!numbers[num]) {
                numbers[num] = 1;
                fprintf(fp, "%02d ", num);
                count++;
            }
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
}

int main() {
    int n;
    printf("Enter number of lotto tickets (1-5): ");
    scanf("%d", &n);
    if (n < 1 || n > 5) {
        printf("Invalid input!\n");
        return 1;
    }
    generate_lotto(n);
    printf("Lotto numbers saved to lotto.txt\n");
    return 0;
}
