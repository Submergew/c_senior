//
// Created by wangz on 2024/8/1.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//间接赋值的三大条件
//1.两个变量 （普通变量 指针变量  or   实参 + 形参
//2.建立关系
//3.通过*操作
void test1()
{
  int a = 10;
  int *p = NULL;

  p = &a;
  *p = 1000;
}
void changevaule()
{

}
void test2()
{
    int a= 10;
    changevaule(&a);
    printf("%d\n",a);
}
int main()
{
    test1();
    test2();
    return 0;
}
