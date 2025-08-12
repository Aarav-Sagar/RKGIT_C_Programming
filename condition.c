#include <stdio.h>
int main()
{
    int x = 27, y = 25;
    if (x > y)
    {
        printf("The Value of X is Greater \n");
        printf("Rahul \n");
    }

    else
        // if Curly Braces is not there than Single line is treated as its associated block
        printf("The Value of Y is Greater \n");

    printf("The End");

    return 0;
}