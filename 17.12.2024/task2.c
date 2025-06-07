#include <stdio.h>
#include <stdlib.h>

struct Book {
    int bookNumber;
    float price;
};

void input(struct Book* book) {
    do {
        printf("Enter the book number\n");
        scanf("%d", &book->bookNumber);
    } while (book->bookNumber < 0);

    do {
        printf("Enter the price for the book\n");
        scanf("%f", &book->price);
    } while (book->price < 0.0);
}

void output(struct Book* book) {
    printf("Book number is %d, Book price is %f\n", book->bookNumber, book->price);
}

int main() {
    struct Book book;
    input(&book);
    output(&book);
}
