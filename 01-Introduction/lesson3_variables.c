#include <stdio.h>

int main()
{
       //1. VARIABLE DEMO (A box whose value can vary/change)
       int exam_attempts = 1;
       printf("Starting point:\n");
       printf("Current exam attempts number: %d\n", exam_attempts);

       //Changing the value of the variable
       exam_attempts = 2;
       printf("After Update:\n");
       printf("After Update, current exam attempts number: %d\n", exam_attempts);



       
       //2. CONSTANT DEMO (A box whose value cannot change)
       const int TARGET_GRADUATION_YEAR = 2030;
       printf("Constant Check:\n");
       printf("Target Graduation Year: %d\n", TARGET_GRADUATION_YEAR);

       // CRITICAL NOTE FOR LAB EXAMS:
       // If you try to remove the comment slashes from the line below and run it:
       // TARGET_GRADUATION_YEAR = 2031; 
       // The C compiler will throw a 'read-only variable' assignment error and crash!
       
       return 0;
}   

