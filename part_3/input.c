#include <stdio.h>

int main(void)
{
    int age;
    scanf("%d", &age);
    printf("%6.2f\n", age * 3.156E7);
    printf("%lu", sizeof(age));

    return 0;
}