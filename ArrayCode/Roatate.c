#include <stdio.h>
void rotate(int *nums, int numsSize, int k)
{
    if (k > 0)
    {
        int temp[k];
        for (int i = 0; i < k; i++)
            temp[i] = nums[numsSize - k + i];
        for (int i = numsSize - 1; i >= k; i--)
            nums[i] = nums[i - k];
        for (int i = 0; i < k; i++)
            nums[i] = temp[i];
    }
}
int main()
{
    int arr[1] = {1};
    rotate(arr, 8, 0);
    // Print array
    for (int i = 0; i < 1; i++)
        printf("%d", arr[i]);
}