//谁是谁的函数 谁又是谁的函数
//你是我的函数嘛
#include <stdio.h>

void one_three(void);
void two(void);

int main(void)
{
    printf("Starting now:\n");
    one_three();
    printf("Done!\n");

    return 0;
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
    return;
}

void two(void)
{
    printf("two\n");
    return;
}