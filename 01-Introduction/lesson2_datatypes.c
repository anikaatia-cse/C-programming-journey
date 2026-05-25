# include <stdio.h>

//1. Using a VOID here because this function does a job but returns NO data values.
void printLine() 
{
    printf("___________\n");
}

int main()
{
    //2. INT (Whole Number)
    int age = 19;

    //3. FLOAT (Standard Decimal-precise to 6 decimal places)
    float standard_pi = 3.141592;

    //4. DOUBLE (Ultra-precise Decimal - precise to 15 decimal places)
    double precise_pi = 3.141592653589793;

    //5. CHAR (Single Character-must use single quotes)
    char grade_target = 'A';

    //6. STRING (Sequence of Characters-must use double quotes)
    char name[] = "CSE";

    //7. BOOLEAN (True or False - C does not have a built-in boolean type, but we can use integers to represent it)
    int is_enrolled = 1; // 1 for true, 0 for false


    
    //---ACTION STATEMENTS-Printing them out---
    printLine();
    printf("1. INTEGER DEMO:\n My age is: %d\n\n", age);
    
    printf("2. FLOAT DEMO:\n Standard Pi: %f\n\n", standard_pi);

    printf("3. DOUBLE DEMO:\n Ultra-Precise Pi: %lf\n\n", precise_pi);

    printf("4. CHARACTER DEMO:\n My target grade is: %c\n\n", grade_target);

    printf("5. STRING DEMO:\n My program is: %s\n\n", name);

    printf("6. BOOLEAN DEMO:\n Am I enrolled? %s\n\n", is_enrolled ? "Yes" : "No");
    printLine();

    return 0;
}