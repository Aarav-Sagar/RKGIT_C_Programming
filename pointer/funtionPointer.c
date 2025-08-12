/* Example of Function Pointer */
#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int main()
{
    int (*ptr)(int, int) = add;
    int add = ptr(12, 23);
    // ptr = sub;
    // int sub = ptr(12, 23);
    printf("%d \n", add);
    // printf("%d \n", sub);
    return 0;
}