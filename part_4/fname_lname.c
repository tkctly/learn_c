#include <stdio.h>

int main(void)
{
    char firstName[10];
    char lastName[10];
    printf("Please enter your firstname:\n");
    scanf("%s", firstName);
    printf("Please enter your lastname:\n");
    scanf("%s", lastName);

    printf("%s,%s\n", firstName, lastName);

    return 0;
}