/*Print the Number from 1 to 10 using recursion*/
#include <stdio.h>
void print(int n)
{
    if (n > 10)
        return;
    print(n + 1);
    printf("%d\n", n);
}
double myPow(double x, int n)
{

    if (n >= 1)
        return x * myPow(x, n - 1);
    if (n < 0)
        return (1 / x) * myPow(x, n + 1);

    return 1;
}
int main()
{
    printf("%f", myPow(2, 3));
}