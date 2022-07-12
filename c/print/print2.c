#include <stdio.h>
//把年龄变换成天数并显示这两个值，不考虑闰年

int main()
{
    int age = 22;
    int age_day = age * 365;

    printf("你的年龄是：%d\n你活了%d天\n",age,age_day);

    return 0;
}
