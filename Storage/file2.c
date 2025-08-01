#include <stdio.h>
extern int shared_variable; // Declaration: 'shared_variable' is defined elsewhere
int main()
{
    printf("From file2.c, shared_variable: %d\n", shared_variable);
    shared_variable = 200; // Can modify the shared variable
    printf("From file2.c (after modification), shared_variable: %d\n", shared_variable);
    return 0;
}
