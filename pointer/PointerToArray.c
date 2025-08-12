/*Example of Pointer to Array */
#include <stdio.h>
int main()
{
    int a[3][5] = {{1, 2, 3, 4, 5},
                   {11, 12, 13, 14, 15},
                   {21, 22, 23, 24, 25}};
    printf("%d \n", a);               // Address
    printf("%d \n", *a);              // first row address
    printf("%d \n", **a);             // value of first element in a row
    printf("%d \n", *(*a + 1));       // 2nd element of first row
    printf("%d \n", *(*(a + 1) + 1)); // 2nd element of 2nd row
    printf("%d \n", *(*(a + 2) + 1)); // 2nd element of 3rd row
    return 0;
}