//
// Created by wangz on 2024/8/1.
//
#include <stdio.h>

#define MYADD(x,y)  x+y  //宏函数 保证运算的完整性

void testh()
{
  int a = 10;
  int b = 20;
    printf("a + b = %d\n",MYADD(a,b)*20);
}


int main()
{
   testh();
    return 0;
}