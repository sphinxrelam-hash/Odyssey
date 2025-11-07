#include <stdio.h>

int main() {
    int n, i, num, freq = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d integers: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find frequency of: ");
    scanf("%d", &num);
    
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            freq++;
        }
    }
    
    printf("The number %d appears %d times in the list.\n", num, freq);
    return 0;
}