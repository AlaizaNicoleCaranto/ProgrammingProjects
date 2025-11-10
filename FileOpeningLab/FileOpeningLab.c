#include <stdio.h>  //Provides input/output functions
#include <stdlib.h> //Allows memory managment
#include <time.h>   //Enables time-related functions

int main()
{
    printf("\n============================================================\n");
    printf("<<<<<<<<<<           FILE OPENING LAB             >>>>>>>>>>\n");
    printf("============================================================\n");
    printf("============================================================\n");

    FILE *file = fopen("input.txt", "r"); // Open input.txt in read mode
    if (file == NULL)
    {
        printf("GOSH! input.txt IS MISSING. PLEASE CREATE THE FILE IF NEEDED. \n"); // Handle missing file
    }
    else
    {
        printf("           NICE! input.txt OPENED SUCCESSFULLY\n");
        fclose(file); // Close the file if it exists
    }
    printf("============================================================\n");

    file = fopen("output.txt", "w"); // Open output.txt in write mode
    if (file == NULL)
    {
        printf(" OOPS! COULDN'T OPEN output.txt FOR WRITING.\n");
        return 1; // Exit with error code if file opening fails
    }
    fprintf(file, " WELCOME! YOUR FILE HAS BEEN CREATED SUCCESSFULLY.\n"); // Write initial content
    fclose(file); // Close the file to save changes

    printf("   SUCCESS! output.txt IS READY WITH AN INITIAL MESSAGE.\n");
    printf("============================================================\n");

    file = fopen("append.txt", "a"); // Open append.txt in append mode
    if (file == NULL)
    {
        printf("  OH NO! COULDN'T OPEN append.txt TO ADD A TIMESTAMP.\n");
        return 1;
    }
    time_t now = time(NULL); // Get the current timestamp
    fprintf(file, "TIME UPDATE: %s", ctime(&now)); // Append the timestamp
    fclose(file); // Close the file to save changes
    printf("   DONE! A  FRESH TIMESTAMP HAS BEEN ADDED TO append.txt.\n");
    printf("============================================================\n");

    file = fopen("output.txt", "r+"); // Open output.txt in read/write mode
    if (file == NULL)
    {
        printf("  OHHH...COULDN'T REOPEN output.txt FOR MODIFICATION.\n");
        return 1;
    }
    fseek(file, 0, SEEK_END); // Move the file pointer to the end of the file
    fprintf(file, "  HERE'S SOME EXTRA CONTENT!\n"); // Append modified content
    fclose(file); // Close the file to save changes
    printf("   AMAZING! output.txt HAS BEEN UPDATED WITH NEW CONTENT.\n");
    printf("============================================================\n");

    printf("============================================================\n");
    printf(">>>>>>>> FILE OPERATIONS COMPLETED SUCCESSFULLY! <<<<<<<<<<<\n"); // Confirm successful execution
    printf("============================================================\n\n");
    return 0; // Exit successfully
}
