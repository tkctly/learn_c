/* nogood.c -- 有错误的程序 */
#include <stdio.h>

int main(void)
{
    int n, n2, n3;

    n = 5;
    n2 = n * n;
    n3 = n2 * n;
    int num1, num2;
    num1 = 3020;
    num2 = 350;

    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
    printf("What?\nNo/nfish?\n");
    printf("There were %d words and %d lines.", num1, num2);
    return 0;
}