#include <stdio.h>

void name(void);
void address_name(void);
void ages2days(void);
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void count(void);
void make_smile(void);
void one_three(void);
void two(void);

int main(void)
{
    name();
    address_name();
    ages2days();
    jolly();
    deny();
    br();
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    printf("\n");
    count();
    make_smile();
    make_smile();
    make_smile();
    printf("\n");
    make_smile();
    make_smile();
    printf("\n");
    make_smile();
    printf("\n");
    one_three();
    return 0;
}

void name(void)
{
    printf("Jfreey Li\n");
    printf("Jfreey\nLi\n");
    printf("Jfreey Li\n");
}

void address_name(void)
{
    printf("Jfreey Li: No.1 Ji Da street Xiang Zhou Area Guang Dong\n");
}

void ages2days()
{
    int age = 33;
    int year_days = 365;
    printf("I living %d days now!\n", age * year_days);
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}

void count(void)
{
    int toes;
    toes = 10;

    printf("%d %d %d\n", toes, toes * toes, toes * toes * toes);
}

void make_smile(void)
{
    printf("Smile!");
}

void one_three(void)
{
    printf("Starting now:");
    printf("one\n");
    two();
    printf("done!\n");
}
void two(void)
{
    printf("two\n");
    printf("three\n");
}