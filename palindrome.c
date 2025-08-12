#include <stdio.h>
#include <stdbool.h>
// FUnction Declaration
bool isPalindrome(int x);
int main()
{

    int x = 121;
    bool ans = isPalindrome(x);
    printf("%d", ans);
    return 0;
}
// Function Definition
bool isPalindrome(int x)
{
    int temp = x;
    int palin = 0;
    while (temp != 0)
    {
        palin = palin * 10 + (temp % 10);
        temp = temp / 10;
    }
    if (palin == x)
        return true;
    else
        return false;
}