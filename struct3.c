#include <stdio.h>

struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};

void printBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("Book ID: %d\n", b.book_id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);
}

int main() {
    struct Book b1;

    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);
    getchar();  // clear newline

    printf("Enter Book Title: ");
    fgets(b1.title, sizeof(b1.title), stdin);
    b1.title[strcspn(b1.title, "\n")] = '\0';  // remove newline

    printf("Enter Author Name: ");
    fgets(b1.author, sizeof(b1.author), stdin);
    b1.author[strcspn(b1.author, "\n")] = '\0';  // remove newline

    printf("Enter Book Price: ");
    scanf("%f", &b1.price);

    printBook(b1);

    return 0;
}
