#include <stdio.h>
#include <stdlib.h> // For malloc and free
int main()
{
    int *ptr_dangling = (int *)malloc(sizeof(int)); // Allocate memory
    if (ptr_dangling == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    *ptr_dangling = 50;
    printf("Value before free: %d\n", *ptr_dangling);
    free(ptr_dangling); // Deallocate the memory. ptr_dangling is now dangling.
                        // At this point, ptr_dangling points to freed memory.
    // Attempting to access *ptr_dangling is undefined behavior.
    // It might print the old value, print garbage, or crash the program.
    printf("Value after free (DANGEROUS ACCESS): %d\n", *ptr_dangling); // DO NOT RELY ON THIS OUTPUT
    ptr_dangling = NULL;                                                // Good practice: set to NULL after freeing to avoid dangling
    printf("Pointer set to NULL after free: %p\n", (void *)ptr_dangling);
    return 0;
}
