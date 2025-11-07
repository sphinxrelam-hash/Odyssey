#include <stdio.h>

struct Employee {
    char name[100];
    float basics, gross;
};

int main() {
    struct Employee emp[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter name and basic pay of employee %d: ", i + 1);
        scanf("%s %f", emp[i].name, &emp[i].basics);
        emp[i].gross = emp[i].basics + (0.52 * emp[i].basics);
    }

    printf("\nEmployee Name\tGross Salary\n");
    for (i = 0; i < n; i++) {
        printf("%s\t\t%.2f\n", emp[i].name, emp[i].gross);
    }

    return 0;
}
