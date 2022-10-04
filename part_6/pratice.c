#include <stdio.h>

int main(void)
{
    int quack = 2;
    printf("%d\n", quack += 5);  // 7
    printf("%d\n", quack *= 10); // 70
    printf("%d\n", quack -= 6);  // 64
    printf("%d\n", quack /= 8);  // 8
    printf("%d\n", quack %= 3);  // 2

    return 0;
}