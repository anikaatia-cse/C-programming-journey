# include<stdio.h>

//Question: Take a number from user and output it's cube.

int main()
{
    float num;
    printf("Enter the value of number:");
    scanf("%f", &num);

    printf("The cube of the number is: %f", num * num * num);
    return 0;
}