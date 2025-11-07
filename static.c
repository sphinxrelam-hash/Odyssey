#include <stdio.h>

void staticDemo() {
    static int count = 0;
    count++;
    printf("staticDemo called %d times\n", count);
}

int main() {
    staticDemo();
    staticDemo();
    staticDemo();
    return 0;
}