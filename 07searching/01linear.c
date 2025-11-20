#include <stdio.h>

int linearSearch(int arr[], int length, int target)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int nums[] = {12, 16, 8, 5, 2};
    int length = sizeof(nums) / sizeof(nums[0]);
    int target = 228;

    int index = linearSearch(nums, length, target);

    if (index == -1)
    {
        printf("Element Not found");
    }
    else
    {
        printf("Element Found !! Index: %d, Value: %d", index, nums[index]);
    }

    return 0;
}