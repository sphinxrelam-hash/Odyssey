#include <stdio.h>

int main() {
    int a, b, c, d, n;

    for (n = 1; n <= 20000; n++) {
        for (a = 1; a * a * a < n; a++) {
            for (b = a; b * b * b < n; b++) {
                for (c = a; c * c * c < n; c++) {
                    for (d = c; d * d * d < n; d++) {
                        if (a*a*a + b*b*b == n && c*c*c + d*d*d == n &&
                            (a != c && a != d && b != c && b != d)) {
                            printf("%d is a Ramanujan number\n", n);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
