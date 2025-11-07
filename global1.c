#include <stdio.h>

int globalVar = 10;

void displayGlobalVar() {
    printf("Inside displayGlobalVar: globalVar = %d\n", globalVar);
}

void modifyGlobalVar() {
    globalVar += 5;
    printf("Inside modifyGlobalVar: globalVar is now = %d\n", globalVar);
}

int main() {
    printf("Inside main: initial globalVar = %d\n", globalVar);
    displayGlobalVar();
    modifyGlobalVar();
    printf("Inside main after modification: globalVar = %d\n", globalVar);
    return 0;
}