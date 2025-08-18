#include <stdio.h>
int main()
{
    int z;
    // Printf is a function which Prints the String Passed
    // it returns the count of number of characters printed by the printf
    z = printf("Hello World\n");
    printf("%d", z);
    int x = scanf("%d %d", &z, &z);
    printf("%d", x);
}