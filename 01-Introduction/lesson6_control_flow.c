#include <stdio.h>

int main() 
{
    int marks;
    printf("===CONTROL FLOW MASTER PROGRAM===\n\n");
    printf("Enter Your Exam Marks(0 to 100):");
    scanf("%d", &marks);
    printf("\n");

    //1. THE SINGLE CONDITION (if):
    //This runs only if the condition is true. If the condition is false, it skips the block of code.
    if (marks >= 90 )
    {
        printf("Congratulations! You got a perfect score!\n");
    }

    //2. THE TWO-WAY CONDITION (if-else):
    //A clean binary choice.You either pass or fail.
    //This runs one block of code if the condition is true, and another block if the condition is false.
    if (marks >= 40 )
    {
        printf("Congratulations! You passed the exam!\n");
    }
    else
    {
        printf("Sorry! You failed the exam, better luck next time!\n");
    }

    //3. THE MULTIPLE-WAY CONDITION (if-else if-else):
    //This allows for multiple conditions to be checked in sequence. It runs the block of code for the first condition that is true, and if none are true, it runs the else block.
    if (marks >= 90 )
    {
        printf("Congratulations! You got a perfect score!\n");
    }
    else if (marks >= 75)
    {
        printf("Great job! You got an A grade!\n");
    }
    else if (marks >= 60)
    {
        printf("Good work! You got a B grade!\n");
    }
    else if (marks >= 40)
    {
        printf("Congratulations! You passed the exam!\n");
    }
    else
    {
        printf("Sorry! You failed the exam, better luck next time!\n");
    }

    return 0;
}    