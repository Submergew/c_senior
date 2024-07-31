
//
// Created by wangz on 2024/7/31.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int a = 10;  //全局作用域

void teste()
{
    static int b = 20; //局部作用域
}

extern int b = 10; //默认在C语言下 全局变量前加了关键字 extern

int main()
{
    teste();
    return 0;
}