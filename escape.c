/* escape.c -- 使用转义序列 */
#include <stdio.h>
int main(void)
{
    float salary;
    printf("\aEnter your desired monthly salary:\n"); /* 1 */
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f ayear.", salary, salary * 12.0);
    printf("\rGee\n");

    long double five = 5.0E10L;
    printf("%Le", five);

    return 0;
}
