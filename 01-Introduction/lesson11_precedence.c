#include <stdio.h>

int main()
{
    printf("===OPERATOR PRECEDENCE MASTER PROGRAM===\n\n");
/* 
Operator Precedence Priority List:
1. Parentheses ()
2. Multiplication *, Division /, Modulus %
3. Addition +, Subtraction -
4. Assignment =, +=, -=, *=, /=, %=
5. Comparison Operators: ==, !=, >, <, >=, <=
6. Logical Operators: &&, ||, !
7. Bitwise Operators: &, |, ^, ~, <<, >>
*/ 

// Let's do some maths!
int a = 50;
int b = 15;
int c = 5;
int d = 10;

int implicit_precendence = a / d * b + c % 2;  // Implicit Precendence - No Parentheses used.
int explicit_precedence = (a + d) / (b - c) * 10; // Explicit Precendence - Parentheses used.
int decisional_precendence = a > b + c && d < b; // Decisional Precedence - Comparison and Logical Operators used.
int compound_precendence = (a += 10) * (b -= 5) + (c *= 2); // Compound Precendence - Assignment Operators used.

printf("Implicit Precedence Result: %d\n", implicit_precendence);
printf("Explicit Precedence Result: %d\n", explicit_precedence);
printf("Decisional Precedence Result: %d\n", decisional_precendence);
printf("Compound Precedence Result: %d\n", compound_precendence);

return 0;
}