#include <stdio.h>
//这个字符串打印emmmm
void br(void);
void ic(void);

int main(void)
{
    br();
    printf(",");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();

    return 0;

}

void br(void)
{
    printf("Brazil,Russia");
}

void ic(void)
{
    printf("India,China");
}