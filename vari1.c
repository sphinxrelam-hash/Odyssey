#include <stdio.h>

int main() {
    int x = 20;
    printf("Outside block: x = %d\n", x);
    
    {
        int y = 20;
        printf("Inside first block: x = %d, y = %d\n", x, y);
    }
    
    {
        int z = 30;
        // FIXED: 'y' is removed from this printf as it's out of scope.
        printf("Inside second block: x = %d, z = %d\n", x, z);
    }
    
    return 0;
}