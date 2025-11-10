#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Define Nested Structure for Address
struct Address
{
    char Street[50]; //Stores Street Name
    char City[50]; //stores City Nme
    int Zip; //Stores ZIP Code

};

//Define Nested Structure for Date of Birth
struct Date
{
    int day; //Stores Day of Birth
    int month; //Stores Month of Birth
    int year; //Stores Year of Birth

};

//Define Main Student Structure
struct Student
{
    char name[50]; //Stores Student Name
    int id; //Stores Student ID Number
    int age; //Stores Student Age
    struct Address cab; //Nested Structure for Student Address
    struct Date dob; //Nested Structure for Student Date of Birth
};

int main() {
    struct Student s1; //Declare a Student Variable

    printf("===========================================================\n");
    printf("<<<<<<<<<<        UNIVERSITY STUDENT RECORD      >>>>>>>>>>\n");
    printf("===========================================================\n");
    printf("\n>>>>>>>>>>           [ INPUT DETAILS ]           <<<<<<<<<<\n");

    //Input Student Details
    printf("\nEnter Student Name: ");
    scanf(" %[^\n]",s1.name); //Reads Entire Line Including Spaces

    printf("Enter Student ID: ");
    scanf("%d", &s1.id);

    printf("Enter Student Age: ");
    scanf("%d", &s1.age);

    //Input Student's Address
    printf("Enter Street: ");
    scanf(" %[^\n]", s1.cab.Street);

    printf("Enter City: ");
    scanf(" %[^\n]", s1.cab.City);

    printf("Enter Zip: ");
    scanf("%d", &s1.cab.Zip);

    //Input Student's Date of Birth
    printf("Day of birth: ");
    scanf("%d", &s1.dob.day);

    printf("Month of birth: ");
    scanf("%d", &s1.dob.month);

    printf("Year of Birth: ");
    scanf("%d", &s1.dob.year);

    system("cls"); //Clears the Screen to Display Output Cleanly

    //Display Student Details
    printf("===========================================================\n");
    printf("<<<<<<<<<<        UNIVERSITY STUDENT RECORD      >>>>>>>>>>\n");
    printf("===========================================================\n");
    printf("\n                 NAME: %s", s1.name);
    printf("\n                   ID: %d", s1.id);
    printf("\n                  AGE: %d", s1.age);
    printf("\n              ADDRESS: %s, %s, %d", s1.cab.Street, s1.cab.City, s1.cab.Zip);
    printf("\n        DATE OF BIRTH: %02d/%02d/%04d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    printf("\n===========================================================\n");

    return 0;
}


