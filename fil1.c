#include <stdio.h>

int main() {
    FILE *file;
    char text[100];

    // Open file in write mode
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write in file: ");
    fgets(text, sizeof(text), stdin);  // Read a line from user

    fprintf(file, "%s", text);  // Write text to file
    fclose(file);  // Close the file

    printf("Text written to file successfully!\n");
    return 0;
}
