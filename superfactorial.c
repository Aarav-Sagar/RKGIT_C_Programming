/* Write a program to find weather the Entered Number
is Super factorial or not */
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter an integer\n");
    scanf("%d", &n);
    int temp = n;
    while (n != 0)
    {
        int fact = 1;
        int j = n % 10;

        while (j >= 1)
        {
            fact = fact * j;
            j--;
        }
        n = n / 10;
        sum = sum + fact;
    }
    if (sum == temp)
        printf("%d is a super factorial", temp);
    else
        printf("%d is not a super factorial", temp);
    return 0;
}