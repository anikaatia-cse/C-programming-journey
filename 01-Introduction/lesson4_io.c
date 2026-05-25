#include <stdio.h>

int main()
{
    float user_gpa;
    char grade_choice;

    printf("Enter your target GPA for this semester(e.g., 3.85):");
    scanf("%f", &user_gpa);
    getchar();  //Cleans up the background 'enter' key buffer

    printf("Enter your target letter grade (A, B, C):");
    scanf("%c", &grade_choice);

    printf("Target GPA: %.2f\n", user_gpa);
    printf("Target Grade Letter: %c\n", grade_choice);

    return 0;
}





