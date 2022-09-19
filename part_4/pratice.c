#define B "booboo"
#define X 10

int main(void)
{
    int age;
    char name;
    printf("Please enter your first name.");
    scanf("%s", name);
    printf("All right, %c, what's your age?\n", name);
    scanf("%f", age);
    const int xp = age + X;
    printf("That's a %s! you must be at least %d.\n", B, xp);
    return 0;
}