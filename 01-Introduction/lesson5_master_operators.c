#include <stdio.h>

int main()
{
    printf("--THE ULTIMATE OPERATOR MASTER PROGRAM--\n\n");

    //1. Arithmetic Operators - (+, -, *, /, %)
    int remainder = 10 % 3; // Modulo operator gives the remainder of division
    printf("1.ARITHMETIC: The remainder of 10 divided by 3 is: %d\n", remainder);

    //2. Assignment Operators - (=, +=, -=, *=, /=)
    int total_points = 50;
    total_points += 15; // Equivalent to total_points = total_points + 15
    printf("2.ASSIGNMENT: Total points after adding 15: %d\n", total_points);

    //3. Comparison Operators - Relational Operators - (==, !=, >, <, >=, <=)
    int score = 85;
    int passing_score = 60;
    int is_passing = score >= passing_score; // Evaluates to 1 (true) or 0 (false)
    printf("3.COMPARISON: Is the score of 85 passing? %s\n", is_passing ? "Yes" : "No");

    //4. Logical Operators - (&&, ||, !)
    int is_adult = 25 >= 18;
    int has_license = 1; // 1 represents true
    int can_drive = is_adult && has_license; // Both conditions must be true
    printf("4.LOGICAL: Can the person drive? %s\n", can_drive ? "Yes" : "No");

    //5. Increment and Decrement Operators - (++, --)
    int counter = 10;
    counter++; // Increments counter by 1
    printf("5.INCREMENT: Counter after incrementing: %d\n", counter);
    counter--; // Decrements counter by 1
    printf("5.DECREMENT: Counter after decrementing: %d\n", counter);

    return 0;
}