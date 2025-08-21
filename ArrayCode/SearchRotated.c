#include <stdio.h>
int search(int *arr, int numsSize, int target)
{
    int beg = 0;
    int end = numsSize - 1;
    int mid;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == target)
            return mid;
        if (arr[mid] < arr[end])
        {
            if (target > arr[mid] && arr[end] >= target)
                beg = mid + 1;
            else
                end = mid - 1;
        }
        else
        {
            if (target < arr[mid] && arr[beg] <= target)
                end = mid - 1;
            else
                beg = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {8, 9, 10, 11, 1, 2, 3, 4, 5, 6, 7};
    printf("%d", search(arr, 11, 10));
}
