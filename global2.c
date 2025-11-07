#include <stdio.h>

int globalVar = 20;

void testFunction() {
    int localVar = 10;
    printf("Inside testFunction: localVar = %d\n", localVar);
    printf("Inside testFunction: globalVar = %d\n", globalVar);
}

int main() {
    testFunction();
    printf("Inside main: globalVar = %d\n", globalVar);
    // Note: Accessing 'localVar' here would cause a compile error,
    // as it is local to testFunction().
    return 0;
}