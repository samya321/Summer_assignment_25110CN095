//WAP to create student record system using arrays and strings
#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

// Structure to group student details together
struct Student {
    int rollNumber;
    char name[NAME_LENGTH];
    float marks;
};

// Global array to store student records and a counter to track current capacity
struct Student records[MAX_STUDENTS];
int studentCount = 0;

// Function declarations
void addStudent();
void displayAll();
void searchStudent();
void updateStudent();

int main() {
    int choice;

    do {
        printf("\n=== STUDENT MANAGEMENT SYSTEM ===\n");
        printf("1. Add New Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Update Student Marks\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Clear input buffer to prevent string bugs in subsequent inputs
        while (getchar() != '\n'); 

        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayAll();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                updateStudent();
                break;
            case 5:
                printf("Exiting system. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}

// Function to add a student record
void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("System full! Cannot add more students.\n");
        return;
    }

    struct Student newStudent;

    printf("Enter Roll Number: ");
    scanf("%d", &newStudent.rollNumber);
    while (getchar() != '\n'); // Clear buffer

    // Check for duplicate roll number
    for (int i = 0; i < studentCount; i++) {
        if (records[i].rollNumber == newStudent.rollNumber) {
            printf("Error: A student with Roll Number %d already exists!\n", newStudent.rollNumber);
            return;
        }
    }

    printf("Enter Full Name: ");
    // Read string including spaces safely up to NAME_LENGTH
    fgets(newStudent.name, sizeof(newStudent.name), stdin);
    // Remove trailing newline added by fgets
    newStudent.name[strcspn(newStudent.name, "\n")] = '\0'; 

    printf("Enter Marks: ");
    scanf("%f", &newStudent.marks);

    // Save to the array
    records[studentCount] = newStudent;
    studentCount++;

    printf("Student record added successfully!\n");
}

// Function to display all records
void displayAll() {
    if (studentCount == 0) {
        printf("No records available to display.\n");
        return;
    }

    printf("\n%-10s %-30s %-10s\n", "Roll No", "Name", "Marks");
    printf("---------------------------------------------------\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%-10d %-30s %-10.2f\n", records[i].rollNumber, records[i].name, records[i].marks);
    }
}

// Function to look up a student by roll number
void searchStudent() {
    if (studentCount == 0) {
        printf("No records available to search.\n");
        return;
    }

    int targetRoll;
    int found = 0;

    printf("Enter Roll Number to search: ");
    scanf("%d", &targetRoll);

    for (int i = 0; i < studentCount; i++) {
        if (records[i].rollNumber == targetRoll) {
            printf("\nStudent Found:\n");
            printf("Roll Number: %d\n", records[i].rollNumber);
            printf("Name:        %s\n", records[i].name);
            printf("Marks:       %.2f\n", records[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", targetRoll);
    }
}

// Function to modify student marks
void updateStudent() {
    if (studentCount == 0) {
        printf("No records available to update.\n");
        return;
    }

    int targetRoll;
    int found = 0;

    printf("Enter Roll Number to update marks: ");
    scanf("%d", &targetRoll);

    for (int i = 0; i < studentCount; i++) {
        if (records[i].rollNumber == targetRoll) {
            printf("Current Marks for %s: %.2f\n", records[i].name, records[i].marks);
            printf("Enter New Marks: ");
            scanf("%f", &records[i].marks);
            printf("Marks updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with Roll Number %d not found.\n", targetRoll);
    }
}