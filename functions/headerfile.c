/*This is The File which used the Header file created by User*/
#include <stdio.h>
#include "MathUser.h"
int main()
{
    int a = 0, b = 0;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    printf("The Sum is %d\n", sum(a, b));
    printf("The Sub is %d\n", sub(a, b));
    printf("The Multiply is %f\n", multiply(a, b));
    printf("The Divide is %f\n", divide(a, b));
}