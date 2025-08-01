#include <stdio.h>
int shared_variable = 100; // Definition of the global variable
void print_shared_variable()
{
    printf("From file1.c, shared_variable: %d\n", shared_variable);
}