#include <stdio.h>
int main(void)
{
    int col, rows;
    for (rows = 0; rows < 4; rows++)
    {
        for (col = 1; col <= 8; col++)
            printf("$");
        printf("\n");
    }
    return 0;
}