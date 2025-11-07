#include <stdio.h>

// Recursive Factorial
int FACT_recursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * FACT_recursive(n - 1);
    }
}

// Non-recursive Factorial
int FACT_non_recursive(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, r, choice, factN, factR, factNR, nCr;

    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of r: ");
    scanf("%d", &r);

    if (n < r || n < 0 || r < 0) {
        printf("Invalid input. Give 0 <= r <= n.\n");
        return 0;
    }

    printf("Choose factorial method: \n1. Recursive \n2. Non-recursive\n");
    scanf("%d", &choice);

    if (choice == 1) {
        factN = FACT_recursive(n);
        factR = FACT_recursive(r);
        factNR = FACT_recursive(n - r);
    } else {
        factN = FACT_non_recursive(n);
        factR = FACT_non_recursive(r);
        factNR = FACT_non_recursive(n - r);
    }

    nCr = factN / (factR * factNR);
    
    // Printing as written in the image
    printf("C(%d, %d) = %d, n=%d, r=%d\n", n, r, nCr);
    printf("n! = %d, r! = %d, (n-r)! = %d\n", factN, factR, factNR);
    printf("Binomial Coefficient C(%d, %d) = %d\n", n, r, nCr);

    return 0;
}