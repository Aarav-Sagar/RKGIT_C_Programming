/*Example of Const Keyword over variable*/
#include <stdio.h>
int main()
{

    const float x = 11.4;
    // expression must be a modifiable lvalue
    x = 11.3;
    printf("%f", x);
    return 0;
}