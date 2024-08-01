//
// Created by wangz on 2024/8/1.
//
#include <stdio.h>
void B()
{

}

void A()
{
    int a; //在函数A,B中可以使用哪个 在main函数中使用不了
    B();
}

int main()
{
    int a;  //在main函数和A,B中都可以使用
    A();
    return 0;
}