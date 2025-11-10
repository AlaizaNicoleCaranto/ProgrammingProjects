#include <stdio.h>

int main() 
{
    printf("\n============================================================\n");
    printf("<<<<<<<<<<<<<       STUDENT DATA VIEWER        >>>>>>>>>>>>>\n");
    printf("============================================================\n");

    // Open the file
    FILE *file = fopen("student_report.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n"); // Display error if file can't be opened
        return 1; // Exit if file opening fails
    }

    char header[50]; // Buffer for header
    int id;
    char name[30];
    int score;
    fgets(header, sizeof(header), file); // Skip the header line

    // Display column headers in a formatted manner
    printf("------------------------------------------------------------\n");
    printf(" %-5s   %-15s %-6s\n",       "\tID",     "\t\tName",        "\t\tScore");
    printf("------------------------------------------------------------\n");

    // Read and display student records
    while (fscanf(file,  "%d %s %d", &id, name, &score) == 3) {
        printf("\t%-5d  \t\t%-15s   \t%-6d\n", id, name, score);
    }

    // Close the file
    fclose(file);

    printf("============================================================\n");
    printf("               ALL RECORDS DISPLAYED SUCCESSFULLY!\n");
    printf("============================================================\n");
    printf("<<<<<<<<<<<<<        END OF STUDENT DATA       >>>>>>>>>>>>>\n");
    printf("============================================================\n\n");

    return 0;
}
