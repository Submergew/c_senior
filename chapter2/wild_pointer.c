//
// Created by wangz on 2024/8/1.
//
#include <stdio.h>
#include <stdlib.h>

int *dowork()
{
    int a = 10;
    int *p = &a;
    return p;
}
void test1()
{
  //1.声明未初始化指针
  int *p;
  //printf("%d\n",*p);

  //2.malloc后free的指针
  int *P = malloc(sizeof(int));
  *p = 100;
  printf("%d\n",*p);

  free(p);
  printf("%d\n",*p);

  p = NULL; //将野指针置空


  //3.指针变量超出了作用域
  int *p2 = dowork();
  printf("p2 = %d\n",*p2);
}

int main()
{
    test1();
    return 0;
}