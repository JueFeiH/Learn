//把打印一句固定的话写成函数并多次打印
#include <stdio.h>

void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
    return;
}

void deny(void)
{
    printf("Which nobody can deny!\n");
    return;
}