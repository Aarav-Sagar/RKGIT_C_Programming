#include <stdio.h>
void rotate(int *nums, int numsSize, int k)
{
    k = k % numsSize;
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = nums[i];
    }

    for (int i = k; i < numsSize; i++)
    {
        nums[i - k] = nums[i];
    }
    for (int i = numsSize - k; i < numsSize; i++)
    {
        nums[i] = temp[i - (numsSize - k)];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;
    rotate(arr, size, 3);
    // print array
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
