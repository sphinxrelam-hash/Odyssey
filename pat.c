#include <stdio.h>

int main() {
    int n = 5, i, j, num, space;

    for (i = 0; i < n; i++) {
        for (space = n; space > i; space--) {
            printf(" ");
        }
        num = 1;
        for (j = 0; j <= i; j++) {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}
