# include<stdio.h>

//Question: Write a program to calculate the area of a circle.

int main()
{
    float radius;
    printf("Enter the value of radius:");
    scanf("%f", &radius);

    printf("The area of the circle is: %f", 3.14 * radius * radius);
    return 0;
}