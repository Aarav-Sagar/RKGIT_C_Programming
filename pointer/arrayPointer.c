/*Print array Using derefrence operator*/
#include <stdio.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    // a=a+1; array is a constant pointer
    for (int x = 0; x < 5; x++)
    {
        printf("%d \n", *(a + x));
    }
    return 0;
}