#include <stdio.h>
#include <string.h>

int main() {
    FILE *file = fopen(__FILE__, "r");
    if (!file) {
        perror("Failed to open file");
        return 1;
    }

    char line[256];
    int line_number = 0;
    
    while (fgets(line, sizeof(line), file)) {
        line_number++;
        if (strstr(line, "int main()") != NULL) {
            printf("Main function is at line: %d\n", line_number);
            fclose(file);
            return 0;
        }
    }

    fclose(file);
    printf("Main function not found!\n");
    return 1;
}
