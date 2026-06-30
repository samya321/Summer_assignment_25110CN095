//WAP to create mini library system
#include <stdio.h>
#include <string.h>

// Structure to store book details
struct Book {
    int id;
    char title[100];
    char author[50];
    int isIssued; // 0 = Available, 1 = Issued
};
struct Book library[100];
int bookCount = 0;
void addBook();
void displayBooks();
void searchBook();
void issueBook();
int main() {
    int choice;

    while (1) {
        printf("\n===== Library Management System =====\n");
        printf("1. Add New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue / Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: printf("Exiting system. Goodbye!\n"); return 0;
            default: printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
void addBook() {
    if (bookCount >= 100) {
        printf("\nLibrary is full! Cannot add more books.\n");
        return;
    }

    printf("\nEnter Book ID (Integer):\n ");
    scanf("%d", &library[bookCount].id);
    
    getchar(); 

    printf("Enter Book Title: \n");
    scanf("%s", library[bookCount].title);

    printf("Enter Author Name:\n ");
    scanf(" %s",library[bookCount].author);

    library[bookCount].isIssued = 0;

    bookCount++;
    printf("Book added successfully!\n");
}

void displayBooks() {
    if (bookCount == 0) {
        printf("\nNo books available in the library.\n");
        return;
    }

    printf("\n%-10s %-40s %-30s %-15s\n", "Book ID", "Title", "Author", "Status");
    printf("-----------------------------------------------------------------------------------------\n");
    for (int i = 0; i < bookCount; i++) {
        printf("%-10d %-40s %-30s %-15s\n", 
               library[i].id, 
               library[i].title, 
               library[i].author, 
               library[i].isIssued ? "Issued" : "Available");
    }
}
void searchBook() {
    int searchId, found = 0;
    if (bookCount == 0) {
        printf("\nLibrary is empty. Nothing to search.\n");
        return;
    }

    printf("\nEnter Book ID to search: ");
    scanf("%d", &searchId);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == searchId) {
            printf("\nBook Found:\n");
            printf("ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Status: %s\n", library[i].isIssued ? "Issued" : "Available");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book with ID %d not found.\n", searchId);
    }
}
void issueBook() {
    int searchId, found = 0, action;
    if (bookCount == 0) {
        printf("\nLibrary is empty.\n");
        return;
    }

    printf("\nEnter Book ID: ");
    scanf("%d", &searchId);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == searchId) {
            found = 1;
            printf("Book status: %s\n", library[i].isIssued ? "Issued" : "Available");
            printf("1. Issue this book\n2. Return this book\nChoose action (1-2): ");
            scanf("%d", &action);

            if (action == 1) {
                if (library[i].isIssued == 1) {
                    printf("Book is already issued to someone else!\n");
                } else {
                    library[i].isIssued = 1;
                    printf("Book issued successfully!\n");
                }
            } else if (action == 2) {
                if (library[i].isIssued == 0) {
                    printf("This book is already in the library inventory.\n");
                } else {
                    library[i].isIssued = 0;
                    printf("Book returned successfully!\n");
                }
            } else {
                printf("Invalid action!\n");
            }
            break;
        }
    }

    if (!found) {
        printf("Book with ID %d not found.\n", searchId);
    }
}

