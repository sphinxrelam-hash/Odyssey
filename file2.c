#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Open file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("File not found!\n");
        return 1;
    }

    printf("File content:\n");
    while ((ch = fgetc(file)) != EOF) {  // Read character by character
        printf("%c", ch);
    }

    fclose(file);  // Close the file
    return 0;
}
