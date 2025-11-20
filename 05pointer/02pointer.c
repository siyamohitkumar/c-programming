#include <stdio.h>
// swap two elements using the concept of pointers

void swap(int *first, int *second)
{
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{

    int firstNum = 12, secondNum = 60;

    printf("firstNum: %d, secondNum (before): %d\n", firstNum, secondNum);

    swap(&firstNum, &secondNum);

    printf("firstNum: %d, secondNum (after): %d\n", firstNum, secondNum);

    return 0;
}