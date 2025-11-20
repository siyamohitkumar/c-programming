#include <stdio.h>

int main()
{

    int num = 12;

    int *ptr = &num;
   
    // Dereference
    printf("Num (ptr): %d\n", *ptr); // 12

    printf("Num (num): %d\n", num); // 12

    // Dereference
    *ptr = 50;

    // Dereference
    printf("Num (ptr): %d\n", *ptr);  // 50

    printf("Num (num): %d\n", num); // 50

    return 0;
}