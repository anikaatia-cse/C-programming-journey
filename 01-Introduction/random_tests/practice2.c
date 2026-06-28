# include<stdio.h>

int main()
{
    int age = 19;
    char star = '*';
    float pi = 3.14;
    double pi = 3.1416;
    
    int a = 20;   //variables(a/A/age/grade/pi/star) are case sensitive.
    int A = 40;   // a and A aren't same, they points different location.

    int _age = 19;  // variables 1st character must start with alphabet or underscore (_)
    int age = 19;   // variables name can't start with hyphen(-age) or any number (1age)
    int final_price = 100;  // we also can't use space or comma in between variables name!


    return 0;
}