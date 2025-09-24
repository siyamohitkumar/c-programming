#include <stdio.h>

int main()
{

    int firstNum = 122, secondNum = 122, thirdNum = 33;

    if (firstNum >= secondNum && firstNum >= thirdNum)
    {
        printf("First num is greatest");
    }
    if (secondNum >= firstNum && secondNum >= thirdNum)
    {
        printf("Second num is greatest");
    }
    if (thirdNum >= firstNum && thirdNum >= secondNum)
    {
        printf("Third num is greatest");
    }

    return 0;
}