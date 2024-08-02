//
// Created by wangz on 2024/8/2.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>


//指针的步长
//1.指针变量+1 后跳跃的字节数

struct Person
{
    char a; //0~3
    int b;  //4~7
    char buf[64]; //8~71
    int d; //72~75
};
void test()
{
  struct Person p = {'a',10,"hello world",1000};
  //p中的d属性偏移量是多少
  printf("d的偏移量为:%d\n",offsetof(struct Person,d));
}


int main()
{
    test();
    return 0;
}