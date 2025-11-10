#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    int id;
    char name[50];
};

int main()
{
    struct Student *records;

    records = (struct Student *)malloc(3 * sizeof(struct Student));

    if (records == NULL)
    {
        fprintf(stderr, "Memory Allocation Failed!\n");
        return 1;
    }

    (records + 0) -> id = 101;
    strcpy((records + 0) -> name = "Neil Clarence Montana");

    (records + 1) -> id = 102;
    strcpy((records + 1) -> name = "Lhea Bilog");

    (records + 2) -> id = 103;
    strcpy((records + 2) -> name = "Phoebe Shania Marzan");

    printf("STUDENT RECORDS\n");
    for(int i = 0; i < 3; ++i)
    {
        printf("  ID: %d\n",(records + i) -> id);
        printf("NAME: %s\n",(records + i) -> name);
    }

    free(records);
    return 0;

}
