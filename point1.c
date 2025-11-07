#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';
    
    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;
    
    printf("Integer value: %d, Address: %p\n", *ptr_int, ptr_int);
    printf("Float value: %.2f, Address: %p\n", *ptr_float, ptr_float);
    printf("Character value: %c, Address: %p\n", *ptr_char, ptr_char);
    
    return 0;
}
