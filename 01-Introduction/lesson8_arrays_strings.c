#include <stdio.h>

int main()
{
    printf("===ARRAYS AND STRINGS MASTER PROGRAM===\n\n");

    //1. WORKING WITH NUMERIC ARRAYS
    //Storing 4 semester test scores for a student in an array.
    int test_scores[4] = {85, 90, 75, 95};
    int total_sum = 0;

    for (int i = 0; i < 4; i++)    //We use a simple loop to walk through our array index by index
    {
        total_sum += test_scores[i];  //We add each score to our total sum
    }
    float average_score = (float)total_sum / 4;  //We calculate the average by dividing the total sum by the number of scores
    printf("Average Test Score: %.2f\n\n", average_score);


    //2. WORKING WITH CARACTER ARRAYS (STRINGS)
    //Storing a student's name in a character array (string).
    char major_name[] = "Computer Science";   //We declare a character array and initialize it with a string literal. The compiler automatically adds a null terminator at the end of the string.
    printf("Welcome to the department of: '%s'\n", major_name);    //We use the %s format specifier to print the string stored in the character array.

    //Accessing individual characters in the string using array indexing.
    printf("First character of the major name: '%c'\n", major_name[0]);  //We access the first character of the string using index 0.
    printf("Third character of the major name: '%c'\n", major_name[2]);  //We access the third character of the string using index 2.


    return 0;
}    




















}