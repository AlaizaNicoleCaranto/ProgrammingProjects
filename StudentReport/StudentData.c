#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf("\n============================================================\n");
    printf("<<<<<<<<<<<<<       STUDENT DATA VIEWER        >>>>>>>>>>>>>\n");
    printf("============================================================\n");

    // Opening the file
    FILE *file = fopen("student_report.txt", "r");
    if (file == NULL) 
    {
        printf("Error: Unable to open file.\n");
        return 1; // Exit if file cannot be opened
    }

    // Skipping the header line
    char header[100]; 
    fgets(header, sizeof(header), file);

    // Displaying table header with visual clarity
    printf("============================================================\n");
    printf("      ID\t   |         Name\t\t     |   Score \n");
    printf("============================================================\n");

    // Reading student records
    int id, score;
    char name[50];

    while (fscanf(file, "%d %[^\n] %f", &id, name, &score) == 3) 
    {
        // Printing each record in a clean tabular format
        printf("| %-10d | %-20s | %-10.2f |\n", id, name, score);
    }

    fclose(file); // Closing the file after reading
    
    printf("============================================================\n");
    printf("               ALL RECORDS DISPLAYED SUCCESSFULLY!\n");
    printf("============================================================\n");
    printf("<<<<<<<<<<<<<        END OF STUDENT DATA       >>>>>>>>>>>>>\n");
    printf("============================================================\n\n");
    return 0;
}
