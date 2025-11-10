#include <stdio.h>

//Define the Student Structure
struct Student
{
    char name[30]; //Stores Student Name
    int id; //Stores Student ID
    float scores[4];//Stores Scores for 4 Subjects
};

//Array of Subject Names for Clarity
const char *Subjects[4] = {
    "Purposive Communication",
    "Pagsasalin sa Filipino",
    "Readings in History",
    "Mathematics in Modern World",
};

int main()
{
    //Hardcoded Data for The Three Students
    struct Student students[3]= {
        {"Patricia Mae Manoguid", 202370224, {90.52, 91.00, 80.96, 81.21}},
        {"Jiela Mae Solero", 202472272, {79.50, 70.87, 83.45, 71.60}},
        {"Neil Clarence Montana", 202300086, {94.50, 96.43, 91.35, 90.25}},
    };

    printf("===========================================================\n");
    printf("<<<<<<<<<<      STUDENT PERFORMANCE ANALYZER     >>>>>>>>>>\n");
    printf("===========================================================\n");

    //Loop Through Each Student And Analyze Performance
    for(int i = 0; i < 3; ++i)
    {
        float sum = 0, highestScore = students[i].scores[0];
        int highestIndex = 0;

        printf("\n-----------------------------------------------------------\n");
        printf("\n          STUDENT NAME: %s\n", students[i].name);
        printf("            STUDENT ID: %d\n", students[i].id);
        printf("        SUBJECT SCORES: \n"); //Static Text Output to Label Upcoming Scores

        //Display Scores With Subjects, Calculate the Sum and Highest Score
        for(int j = 0; j < 4; ++j)
        {
            printf("                 - %s: %.2f\n", Subjects[j], students[i].scores[j]);
            sum += students[i].scores[j];

            if(students[i].scores[j] > highestScore)
            {
                highestScore = students[i].scores[j];
                highestIndex = j; //Track the Subject with the Highest Score
            }
        }
        //Calculate and Display Average Score
        float average = sum / 4;
        printf("         AVERAGE SCORE: %.2f\n", average);
        printf("         HIGHEST SCORE: %.2f in %s\n", highestScore, Subjects[highestIndex]);

    }
    printf("\n===========================================================\n");
    printf("<<<<<<<<<<          END OF STUDENT RECORD        >>>>>>>>>>\n");
    printf("===========================================================\n");

    return 0;
}
