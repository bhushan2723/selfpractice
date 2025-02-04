#include <stdio.h>

#define NUM_BOOKS 5 // Number of books

// Structure to store book details
typedef struct {
    char title[50];    // Book title
    char author[50];   // Book author
    float price;       // Book price
    int available;     // 1 for available, 0 for not available
} Book;

int main() {
    Book books[NUM_BOOKS]; // Array to store 5 books

    // Input details for each book
    for (int i = 0; i < NUM_BOOKS; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf(" %[^\n]", books[i].title); // Input title using %s
        printf("Author: ");
        scanf(" %[^\n]", books[i].author); // Input author using %s
        printf("Price: ");
        scanf("%f", &books[i].price); // Input price
        printf("Availability (1 = Yes, 0 = No): ");
        scanf("%d", &books[i].available); // Input availability
    }

    // Display details of all books
    printf("\nBooks in the Library:\n");
    for (int i = 0; i < NUM_BOOKS; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", books[i].title); // Display title using %s
        printf("Author: %s\n", books[i].author); // Display author using %s
        printf("Price: $%.2f\n", books[i].price);
        printf("Available: %s\n", books[i].available ? "Yes" : "No");
    }

    return 0;
}
