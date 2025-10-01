#include <stdio.h>

int main()
{

    for (int i = 0; i <= 10; i = i + 1)
    {
        for (int j = 0; j <= 10; j = j + 1)
        {
            if (j == 0 || j == 10 || j == i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}