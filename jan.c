#include <stdio.h>

int main() {
    int year, days = 0, i;
    printf("Enter a year: ");
    scanf("%d", &year);

    for (i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            days += 366;
        else
            days += 365;
    }

    int day = days % 7;

    printf("On 1st January %d, it was ", year);

    switch (day) {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }

    return 0;
}
