#include <stdio.h>

int binarySearch(int arr[], int length, int target)
{
    int low = 0;
    int high = length - 1;

    while (high >= low)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int nums[] = {4, 5, 6, 7, 8};
    int length = sizeof(nums) / sizeof(nums[0]);
    int target = 4;

    int result = binarySearch(nums, length, target);

    if (result == -1)
    {
        printf("Element Not Found");
    }
    else
    {
        printf("Element Found !! Index: %d, Value : %d", result, nums[result]);
    }

    return 0;
}