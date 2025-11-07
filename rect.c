#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    area = length * width;
    perimeter = 2 * (length + width);

    printf("\nArea = %.2f", area);
    printf("\nPerimeter = %.2f\n", perimeter);

    return 0;
}
