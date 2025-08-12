/*Example of Const Keyword over variable*/
#include <stdio.h>
int main()
{

    // Here we are not assigning the value to x at the time of declaration
    // if we declare a variable as const then that
    // must be assined a value within the same line
    const float x = 110.8;
    float const y = 55.5;
    // expression must be a modifiable lvalue

    printf("%f", x);
    return 0;
}