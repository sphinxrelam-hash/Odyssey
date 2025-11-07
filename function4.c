#include <stdio.h>

int ISPRIME(int num) {
    int i;

    // Note: The code in the image checks `num == 1`. 
    // Checking `num <= 1` is more robust as 0 and negative numbers are not prime.
    if (num == 1) { 
        return 0;
    }

    // The loop in the image is `for(i=2; i<num; i++)`. 
    // A more optimized version would be `i <= num/2` or `i*i <= num`.
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    
    return 1; // Is prime
}

int main() {
    int start, end, i;
    
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    
    printf("Prime numbers between %d and %d are: \n", start, end);
    
    for (i = start; i <= end; i++) {
        if (ISPRIME(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}