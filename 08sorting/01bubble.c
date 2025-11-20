#include <stdbool.h>
#include <stdio.h>

// Swap
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Bubble Sort
void bubbleSort(int arr[], int n)
{
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int nums[] = {23, 24, 36, 12, 8, 5};
    int length = sizeof(nums) / sizeof(nums[0]);

    printf("Unsorted array: \n");
    printArray(nums, length);

    bubbleSort(nums, length);

    printf("Sorted array: \n");
    printArray(nums, length);

    return 0;
}
