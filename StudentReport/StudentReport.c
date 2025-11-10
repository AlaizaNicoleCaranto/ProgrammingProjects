#include <stdio.h>

int main() 
{
    printf("\n============================================================\n");
    printf("<<<<<<<<<<<<<          STUDENT REPORT          >>>>>>>>>>>>>\n");
    printf("============================================================\n");

    // Open file in write mode
    FILE *file = fopen("student_report.txt", "w");

    // Check if file opened successfully
    if (file == NULL) {
        printf("    OOPS! ERROR OPENING FILE. PLS. TRY AGAIN.\n");
        return 1; // Exit if file can't be opened
    }

    // Write header with separators in the file
    fprintf(file, "============================================================\n");
    fprintf(file, "       ID\t   |         Name\t\t     |    Score \n");
    fprintf(file, "============================================================\n");

    // Loop to collect and store data for 3 students
    for (int i = 0; i < 3; i++) {
        int id, score;
        char name[50];

        // Friendly prompts for user input
        printf("\n------------------------------------------------------------\n");
        printf("                   ENTER STUDENT DETAILS (%d):\n", i + 1);
        
        printf("\n           Enter Student ID: ");
        scanf("%d", &id);

        printf("           Enter Student Name: ");
        scanf(" %[^\n]", name); // Reads string with spaces

        printf("           Enter Student Score: ");
        scanf("%d", &score);

        // Write formatted data into the file with separators
        fprintf(file, "   %d\t      | %s\t        | %d \n", id, name, score);
    }
    fclose(file);// Close file to ensure data is properly saved

    printf("\n------------------------------------------------------------\n");
    printf("   Student data successfully saved to student_report.txt!\n");
    printf("\n============================================================\n");
    printf("<<<<<<<<<<<<<       END OF STUDENT REPORT      >>>>>>>>>>>>>\n");
    printf("============================================================\n\n");

    return 0; 
}
