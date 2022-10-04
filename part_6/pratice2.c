#include <stdio.h>

int main(void)
{
    double value;
    for (value = 36.0; value > 0.0; value /= 2.0)
    {
        printf("%3f\n", value);
        // 36
        // 18
        // 9
        // 4
        // 2
        // 1
    }
    return 0;
}