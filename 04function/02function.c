#include <stdio.h>

void simpleInterest(int p, int r, int t) // 1. Function Declaration
{
    // 2. Function Definition

    int si = (p * r * t) / 100;
    printf("Simple Interest: %d\n", si);
}


int main()
{

    // 3. Function Call
    simpleInterest(2000, 5, 2);
    simpleInterest(4000, 5, 2);

    return 0;
}
