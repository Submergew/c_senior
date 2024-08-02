//
// Created by wangz on 2024/8/1.
//
#include <stdio.h>
#include <string.h>


//指针的步长
//1.指针变量+1后跳跃的字节数
void test1()
{
    char *p = NULL;

    printf("%d\n",p);
    printf("%d\n",p+1);

    double *p2 = NULL;

    printf("%d\n",p2);
    printf("%d\n",p2+1);
}

//2.在解引用的时候，取出的字节数

void test2()
{
    char buf[1024] = {0};
    int a = 1000;
    memcpy(buf,&a,sizeof(int));

    char *p = buf;

    printf("%d\n",*(int*)p);

}



int main()
{
    test1();
    test2();
    return 0;
}