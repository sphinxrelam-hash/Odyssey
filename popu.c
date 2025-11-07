#include <stdio.h>

int main() {
    float population = 100000;
    int year;

    for (year = 1; year <= 10; year++) {
        population = population + (population * 0.10);
        printf("Year %d: Population = %.0f\n", year, population);
    }

    return 0;
}
