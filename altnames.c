/* altnames.c -- 可移植整数类名 */
#include <stdio.h>
#include <inttypes.h> // 支持可移植类型
int main(void)
{
    int32_t me32;
    me32 = 45933945;

    printf("First, assume int32_t int: ");
    printf("me32 = %d\n", me32);
    printf("Next, let's not make any assumptions.\n");
    printf("me32 = %" PRId32 "\n", me32);

    return 0;
}