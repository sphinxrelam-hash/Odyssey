#include <stdio.h>

int main() {
    float w, h, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &w);

    printf("Enter height (cm): ");
    scanf("%f", &h);

    h = h / 100;  
    bmi = w / (h * h);

    printf("BMI = %.2f\n", bmi);

    if (bmi < 18.5)
        printf("Underweight");
    else if (bmi < 25)
        printf("Normal");
    else if (bmi < 30)
        printf("Overweight");
    else
        printf("Obese");

    return 0;
}
