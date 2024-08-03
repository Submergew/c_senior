//
// Created by wangz on 2024/8/3.
//
#include <stdio.h>
#include <stdlib.h>

//realloc

void test2()
{
    //功能重新分配
    int *p = malloc(sizeof(int)*10);


    for(int i = 0;i < 10;i++)
    {
        p[i] = i+1;
    }
    for(int i = 0;i < 10;i++)
    {
        printf("%d\n",p[i]);
    }

    printf("%d\n",p);
    //参数1 原空间的首地址  参数2  重新分配内存大小
    p = realloc(p,sizeof(int)*11);

}
int main()
{
    test2();

    return 0;
}