/*Static Storage Class Example*/
#include <stdio.h>
void f()
{
    static int x = 10;
    printf("%d \n", x);
    x++;
}
int main()
{
    for (int i = 0; i < 19; i++)
    {
        f();
    }
    return 0;
}
