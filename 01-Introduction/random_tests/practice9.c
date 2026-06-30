# include<stdio.h>

//Question: Write a program to find the perimeter of a rectangle.

int main()
{
    float length, width;
    printf("Enter the value of length:");
    scanf("%f", &length);
    printf("Enter the value of width:");
    scanf("%f", &width);

    printf("The perimeter of a rectangle is: %f", 2 * (length + width));
    return 0;
}