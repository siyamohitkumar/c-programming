#include <stdio.h>

// 1. Function Declaration
int add(int firstNum, int secondNum);

int main()
{
    int x = 8, y = 10;

    // 3. Function Call
    int z = add(x, y);
    printf("Sum: %d", z);

    return 0;
}

// 2. Function Definition

int add(int firstNum, int secondNum)
{
    int sum = firstNum + secondNum;
    return sum;
}