#include <stdio.h>
int main()
{
    int x = 10;
    int *p = &x;
    char z = 'a';
    char *q = &z;
    void *v = &x;
    printf("%d \n", x);  // 10
    printf("%p \n", p);  // address
    printf("%c \n", z);  // a
    printf("%p \n", q);  // address
    printf("%d \n", *p); // 10
    printf("%c \n", *q); // a
    // through void pointer the system is not have enough
    // information how much memory location is accessd by this pointer.
    // printf("%d \n", *v); // 10

    return 0;
}