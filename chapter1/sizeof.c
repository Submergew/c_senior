//
// Created by wangz on 2024/7/31.
//
#include <stdio.h>

//1.sizeof  本质不是一个函数，是运算符 + - /

void test7()
{
  printf("sizeof int = %zd\n",sizeof(int));

  //但是对于统计变量时候，可以不加小括号
  double d = 3.14;
  printf("sizeof int d = %zd\n",sizeof d );

}

//2.sizeof 返回值 是 unsigned int  无符号整型
void test8()
{

    unsigned int a = 10;
    if(a-20 > 0) //如果一个unsigned int和int去运算，结果会统一转换为 unsigned int
    {
        printf("大于0\n");
    }
    else
    {
        printf("小于0\n");
    }
}

//3. sizeof其他用法 统计数组占用内存空间大小
void test9()
{
    int arr[] = {1,2,3,4,5,6,7,8};

    printf("sizeof arr = %d\n",sizeof(arr));

}


int main()
{
  //test7();
  test8();
    return 0;
}