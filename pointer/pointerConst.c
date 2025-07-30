/*Exaple for pointer to constant & Constant to pointer*/
#include <stdio.h>
int main()
{
    int x = 10;
    int y = 20;
    // pointer to contant you are not able to change the value
    // through pointer
    // int const *p = &x;
    // const int *p = &x;
    // but the address of pointer may change

    // how to declare a Constant pointer ?
    // as follows
    int *const p = &x;
    *p = 35;
    printf("%d \n", x);
    printf("%d \n", *p);
    return 0;
}
