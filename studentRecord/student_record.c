#include <stdio.h>
#include <stdlib.h>

// Define The Student Structure
struct Student
{
    int id;
    char name[50];
    float gpa;
};

int main()
{
    struct Student student;

    printf("===========================================================\n");
    printf("<<<<<<<<<<              Input Details            >>>>>>>>>>\n");
    printf("===========================================================\n");

    // User Input For Student Details
    printf("\nEnter Student ID (Do Not Include Dash(-)): ");
    scanf("%d", &student.id);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", &student.name); //Space Before % Ensures proper input handling

    printf("Enter Student GPA: ");
    scanf("%f", &student.gpa);

    system("cls");

    // Display the student details in a clear format
    printf("===========================================================\n");
    printf("<<<<<<<<<<              Student Record           >>>>>>>>>>\n");
    printf("===========================================================\n");
    printf("\n                      ID: %d\n", student.id);
    printf("                    Name: %s\n", student.name);
    printf("                     GPA: %.2f\n", student.gpa);

    printf("\n===========================================================\n");

    return 0;
}
