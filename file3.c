#include <stdio.h>

int main() {
    FILE *file;
    char line[200];

    // Open file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("File content:\n");
    while (fgets(line, sizeof(line), file)) {  // Read line by line
        printf("%s", line);
    }

    fclose(file);  // Close the file
    return 0;
}
