#include <stdio.h>


struct Student {
    int regNumber;
    char name[50];
};


void inputStudentRecords(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter registration number: ");
        scanf("%d", &students[i].regNumber);
        printf("Enter name: ");
        scanf(" %[^\n]", students[i].name);  
    }
}


void displayStudentRecords(struct Student students[], int n) {
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: Reg No: %d, Name: %s\n", i + 1, students[i].regNumber, students[i].name);
    }
}

int main() {
    int n;

    printf("Enter number of students to register: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid number of students. Please enter a number between 1 and 100.\n");
        return 1;
    }

    struct Student students[100]; 

    inputStudentRecords(students, n);
    displayStudentRecords(students, n);

    return 0;
}