#include <stdio.h>

int main()
{
    int firstNum = 24, secondNum = 24;
    char operator = '+';

    switch (operator)
    {
    case '+':
        printf("Sum: %d\n", firstNum + secondNum);
        break;
    case '-':
        printf("Sub: %d\n", firstNum - secondNum);
        break;
    case '*':
        printf("Mul: %d\n", firstNum * secondNum);
        break;
    case '/':
        printf("Quo: %d\n", firstNum / secondNum);
        break;
    case '%':
        printf("Remain: %d\n", firstNum % secondNum);
        break;
    default:
        printf("OOPS !! Please enter the correct operator");
    }

    return 0;
}