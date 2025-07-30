/* Find a square of Given number using Built in Function Power */
#include <stdio.h>
#include <math.h>
float square(int x)
{
    return pow(x, 2);
}
int main()
{
    int a = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("The Square is %f\n", square(a));
}
