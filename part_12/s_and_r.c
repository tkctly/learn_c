/* s_rand_r.c -- 生成随机数 */
static unsigned long int next = 1;

unsigned int rand1(void)
{
    next = next * 1103515245 + 12345;
    return (unsigned int)(next / 65536) % 32768;
}

void srand1(unsigned int seed)
{
    next = seed;
}