
//
// Created by wangz on 2024/8/3.
//
#include <stdio.h>
#include <stdlib.h>
//calloc

void test1()
{
    //malloc不会做清0的操作
    //int*p = malloc（sizeof（int）*10）

    //参数1 开辟个数 参数2 每个占多少字节数
    //和malloc相同是在堆区开辟内存空间
    //和malloc不同的是 开辟空间后 置0的操作
    int *p = calloc(10,sizeof(int));

    for (int i = 0; i < 10;i++)
    {
        printf("%d\n",p[i]);
    }
    free(p);
    p = NULL;

}
int main()
{
    test1();
    return 0;
}