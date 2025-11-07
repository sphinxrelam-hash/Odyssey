#include <stdio.h>
#include <string.h>

void REVERSE(char str[]) {
    int i, j;
    char temp;
    int len = strlen(str);
    
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer alternative to gets()

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    REVERSE(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}
