# include<stdio.h>

//Question: Write a program to calculate the area of a square.
 
int main()
{
    float side;
    printf("Enter the value of side:");
    scanf("%f", &side);

    printf("The area of square is: %f", side * side);
    return 0;
}