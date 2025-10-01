#include <stdio.h>

int main()
{

    for (int i = 0; i < 5; i = i + 100)
    {
        printf("%d\n", i + 100);
    }

    return 0;
}