#include <stdio.h>
#include <string.h>

int main()
{

    char firstName[] = "Mohit ";
    char lastName[] = {'K', 'u', 'm', 'a', 'r', '\0'};

    printf("%s\n", firstName);
    printf("%s\n", lastName);

    // strlen();
    int lengthFirstName = strlen(firstName); // Mohit
    int lengthLastName = strlen(lastName);   // Kumar

    printf("length of first name: %d\n", lengthFirstName); // 6
    printf("length of last name: %d\n", lengthLastName);   // 5

    // strcat(dest, src);
    strcat(firstName, lastName);
    strcat(firstName, " Maurya");

    printf("%s\n", firstName); // Mohit Kumar Maurya

    // strcpy(dest, src);
    strcpy(firstName, "Google Microsoft");

    printf("%s\n", firstName); // Google Microsoft
    return 0;
}