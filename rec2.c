#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check triangle validity
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("It is a valid triangle.\n");

        // Check for Equilateral
        if (a == b && b == c)
            printf("The triangle is Equilateral.\n");
        // Check for Isosceles
        else if (a == b || b == c || a == c)
            printf("The triangle is Isosceles.\n");
        // Check for Right-angled
        else if ((a*a + b*b == c*c) || 
                 (a*a + c*c == b*b) || 
                 (b*b + c*c == a*a))
            printf("The triangle is Right-angled.\n");
        // Otherwise Scalene
        else
            printf("The triangle is Scalene.\n");
    } 
    else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
