#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'A';
    
    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;

    printf("Original Addresses:\n");
    printf("int pointer: %p\n", p1);
    printf("float pointer: %p\n", p2);
    printf("char pointer: %p\n", p3);

    p1++;
    p2++;
    p3++;

    printf("\nAfter Increment:\n");
    printf("int pointer: %p\n", p1);
    printf("float pointer: %p\n", p2);
    printf("char pointer: %p\n", p3);

    p1--;
    p2--;
    p3--;

    printf("\nAfter Decrement (Back to Original):\n");
    printf("int pointer: %p\n", p1);
    printf("float pointer: %p\n", p2);
    printf("char pointer: %p\n", p3);

    return 0;
}
