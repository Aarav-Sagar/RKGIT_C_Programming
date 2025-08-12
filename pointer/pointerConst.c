/*Exaple for pointer to constant & Constant to pointer*/
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 20;
    // pointer to contant you are not able to change the value
    // through pointer
    // int const *p = &x;

    // pointer to constant
    // By Using Pointer you are not able to change the variable using pointer
    // int const *p = &x;
    //*p = 88;
    x = 88;
    // but the address of pointer may change

    // how to declare a Constant pointer ?
    // as follows
    // array name is a Constant pointer
    int *const p = &x;
    // *p = 35;
    p = &y;
    printf("%d \n", x);
    printf("%d \n", *p);
    return 0;
}
