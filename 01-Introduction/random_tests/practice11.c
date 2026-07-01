# include<stdio.h>
# include<math.h>  //As I added a new mathematical term 'power', I had to include the math.h header file to use the pow() function.

int main()
{
    int b, c;
    b = c = 1;
    int a = b + c;
    
    int power = pow(b, c);
    printf("%d", power);
    return 0;
}