#include <stdio.h>

// This function receives pointers to the variables
void modifyValues(int *x, float *y, char *z) {
    *x = *x + 10;
    *y = *y * 2;
    *z = 'Z';
}

int main() {
    int a = 5;
    float b = 3.5;
    char c = 'A';
    
    printf("Before Modification:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);
    
    // We pass the addresses of the variables
    modifyValues(&a, &b, &c);
    
    printf("After Modification:\n");
    printf("a = %d, b = %.2f, c = %c\n", a, b, c);
    
    return 0;
}