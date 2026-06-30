//WAP to develop complete mini project using arrays,strings and functions
//STUDENT MANAGEMENT SYSTEM
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

// Global variables (Parallel Arrays to store data)
int rollNumbers[MAX_STUDENTS];
char names[MAX_STUDENTS][NAME_LENGTH]; // 2D array of characters (Array of Strings)
float gpas[MAX_STUDENTS];
int studentCount = 0;

// Function Declarations
void displayMenu();
void addStudent();
void displayStudents();
void searchStudent();
void calculateAverageGPA();

int main() {
    int choice;

    while (1) {
        displayMenu();
        printf("Enter your choice (1-5): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input type!\n");
            break;
        }

        // Consume trailing newline character from buffer
        getchar(); 

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                calculateAverageGPA();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please select between 1 and 5.\n");
        }
    }
    return 0;
}

// Function to display the user dashboard menu
void displayMenu() {
    printf("\n===================================\n");
    printf("     STUDENT MANAGEMENT SYSTEM     \n");
    printf("===================================\n");
    printf("1. Add New Student\n");
    printf("2. Display All Students\n");
    printf("3. Search Student by Name\n");
    printf("4. Calculate Average GPA\n");
    printf("5. Exit\n");
    printf("-----------------------------------\n");
}

// Function to add a student's records to the arrays
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Error: System storage is full!\n");
        return;
    }

    printf("Enter Roll Number: ");
    scanf("%d", &rollNumbers[studentCount]);
    getchar(); // Clear buffer

    printf("Enter Student Name: ");
    // Read string including spaces and strip the trailing newline
    fgets(names[studentCount], NAME_LENGTH, stdin);
    names[studentCount][strcspn(names[studentCount], "\n")] = '\0';

    printf("Enter GPA: ");
    scanf("%float", &gpas[studentCount]);

    studentCount++;
    printf("Student added successfully!\n");
}

// Function to loop through arrays and display records
void displayStudents() {
    if (studentCount == 0) {
        printf("No records found in the database.\n");
        return;
    }

    printf("\n%-10s %-20s %-5s\n", "Roll No", "Name", "GPA");
    printf("-----------------------------------------\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%-10d %-20s %-5.2f\n", rollNumbers[i], names[i], gpas[i]);
    }
}

// Function demonstrating string manipulation (searching records)
void searchStudent() {
    if (studentCount == 0) {
        printf("No records available to search.\n");
        return;
    }

    char searchName[NAME_LENGTH];
    int found = 0;

    printf("Enter the name of the student to search: ");
    fgets(searchName, NAME_LENGTH, stdin);
    searchName[strcspn(searchName, "\n")] = '\0';

    printf("\nSearch Results:\n");
    for (int i = 0; i < studentCount; i++) {
        // Case-sensitive exact/partial matching using strstr() 
        if (strstr(names[i], searchName) != NULL) {
            printf("Roll No: %d, Name: %s, GPA: %.2f\n", rollNumbers[i], names[i], gpas[i]);
            found = 1;
        }
    }

    if (!found) {
        printf("No student found matching standard '%s'.\n", searchName);
    }
}

// Function using numeric array data to calculate metrics
void calculateAverageGPA() {
    if (studentCount == 0) {
        printf("No students available to calculate GPA.\n");
        return;
    }

    float totalGPA = 0.0;
    for (int i = 0; i < studentCount; i++) {
        totalGPA += gpas[i];
    }

    float average = totalGPA / studentCount;
    printf("The Average GPA of all %d students is: %.2f\n", studentCount, average);
}