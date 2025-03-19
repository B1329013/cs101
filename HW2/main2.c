#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *src = fopen(__FILE__, "r");
    if (src == NULL) {
        perror("Failed to open file");
        return 1;
    }

    FILE *dest = fopen("main2.txt", "w");
    if (dest == NULL) {
        perror("Failed to open output file");
        fclose(src);
        return 1;
    }

    char ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("Source code copied to main2.txt\n");
    return 0;
}
