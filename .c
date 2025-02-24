#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
    char name[100];
    int reg_no;
    char course[50];
    char department[50];
    float total_scores;
    int num_scores;
    float average_score;
    char grade;
};

struct Student students[MAX_STUDENTS];
int num_students = 0;

// Function Prototypes
float calculate_average_score(float total_scores, int num_scores);
char calculate_grade(float average_score);
void insert_student();
void display_students();

// Calculate average score based on total scores and number of scores
float calculate_average_score(float total_scores, int num_scores) {
    if (num_scores <= 0) {
        printf("Error: Number of scores must be a positive integer.\n");
        return 0.0f;
    }
    return total_scores / num_scores;
}

// Determine grade using academic grading scale
char calculate_grade(float average_score) {
    if (average_score >= 90 && average_score <= 100) return 'A';
    else if (average_score >= 80) return 'B';
    else if (average_score >= 70) return 'C';
    else if (average_score >= 60) return 'D';
    else return 'F';
}

// Insert student data into the record system
void insert_student() {
    if (num_students >= MAX_STUDENTS) {
        printf("Student database is full. Cannot add more students.\n");
        return;
    }

    struct Student *current = &students[num_students];

    printf("\nEnter student name (up to 99 characters): ");
    scanf(" %99[^\n]", current->name);

    printf("Enter registration number: ");
    scanf("%d", &current->reg_no);

    printf("Enter course name (up to 49 characters): ");
    scanf(" %49[^\n]", current->course);

    printf("Enter department name (up to 49 characters): ");
    scanf(" %49[^\n]", current->department);

    printf("Enter total scores: ");
    scanf("%f", &current->total_scores);

    printf("Enter number of scores: ");
    scanf("%d", &current->num_scores);

    if (current->num_scores <= 0) {
        printf("Error: Number of scores must be a positive integer. Record not added.\n");
        return;
    }

    current->average_score = calculate_average_score(current->total_scores, current->num_scores);
    current->grade = calculate_grade(current->average_score);

    num_students++;
    printf("\nStudent information added successfully.\n");
}

// Display all saved student records
void display_students() {
    if (num_students == 0) {
        printf("No student records found.\n");
        return;
    }

    printf("\n=== Student Records ===\n");
    printf("%-10s %-10s %-20s %-20s %-15s %s\n", 
           "Reg No", "Name", "Course", "Department", "Avg Score", "Grade");

    for (int i = 0; i < num_students; i++) {
        printf("%-10d %-10s %-20s %-20s %-15.2f %c\n",
               students[i].reg_no, students[i].name, students[i].course,
               students[i].department, students[i].average_score, students[i].grade);
    }
    printf("\n");
}

// Main program loop
int main() {
    int choice;
    do {
        printf("\n1. Insert Student Record");
        printf("\n2. Display Student Records");
        printf("\n3. Delete Record (Not Implemented)");
        printf("\n4. Update Record (Not Implemented)");
        printf("\n5. Search Record (Not Implemented)");
        printf("\n6. Exit");

        printf("\nEnter your choice (1-6): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insert_student(); break;
            case 2: display_students(); break;
            case 3: printf("Feature not available.\n"); break;
            case 4: printf("Feature not available.\n"); break;
            case 5: printf("Feature not available.\n"); break;
            case 6: printf("\nExiting program.\n"); break;
            default: printf("\nInvalid choice. Please choose 1-6.\n");
        }
    } while (choice != 6);

    return 0;
}
