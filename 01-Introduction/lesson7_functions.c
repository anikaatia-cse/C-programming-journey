#include <stdio.h>

//PATTERN 1: No input, No output (Void with no parameters)
void printWelcomeBanner()
{
    printf("===WELCOME TO THE FUNCTION MASTER PROGRAM===\n\n");
}

//PATTERN 2: Takes input, No output (Void with parameters)
void displaySemesterGoal(float target_gpa)
{
    printf("Your target GPA for this semester is : %.2f\n", target_gpa);
}

//PATTERN 3: Takes input, Returns output (Non-void with parameters)
int calculateCreditPoints(int course_count)
{
    int total_credits = course_count * 3; // Assuming each course is worth 3 credits
    return total_credits;
}

//PATTERN 4: No input, Returns output (Non-void with no parameters)
float getTargetGPA()  //It takes no inputs inside the (), but provides an output (the target GPA) when called.
{
    float target_gpa;
    printf("Enter your target GPA for this semester: ");
    scanf("%f", &target_gpa);
    return target_gpa;
}

int main()
{
    //Using PATTERN 1:
    printWelcomeBanner();

    //Using PATTERN 2:
    float target_gpa = 4.00;
    displaySemesterGoal(target_gpa);

    //Using PATTERN 3:
    int course_count = 4;
    int total_credits = calculateCreditPoints(course_count);
    printf("Total credit points for %d courses: %d\n", course_count, total_credits);

    //Using PATTERN 4:
    float user_target_gpa = getTargetGPA();
    printf("Your entered target GPA is: %.2f\n", user_target_gpa);

    return 0;
}













