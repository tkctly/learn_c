/* book.c -- 一本书的图书目录 */
#include <stdio.h>
#include <string.h>
char *s_gets(char *st, int n);
#define MAXTITL 41
#define MAXAUTL 31

struct book
{
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
};

int main(void)
{
    struct book library;
    printf("Please enter the book title.\n");
    s_gets(library.title, MAXTITL);
    printf("Now enter the author.\n");
    s_gets(library.author, MAXTITL);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);

    return 0;
}