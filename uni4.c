#include <stdio.h>

union Address {
    char name[50];
    char address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    printf("Enter your name: ");
    scanf("%s", addr.name);
    printf("Name: %s\n", addr.name);

    printf("\nEnter your address: ");
    scanf("%s", addr.address);
    printf("Address: %s\n", addr.address);

    printf("\nEnter your city: ");
    scanf("%s", addr.city);
    printf("City: %s\n", addr.city);

    printf("\nEnter your state: ");
    scanf("%s", addr.state);
    printf("State: %s\n", addr.state);

    printf("\nEnter your zip code: ");
    scanf("%s", addr.zip);
    printf("Zip Code: %s\n", addr.zip);

    return 0;
}
