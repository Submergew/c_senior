//
// Created by wangz on 2024/7/31.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// int a = 10;
const int a = 10;//  全局const常亮  放在常量区的保护

void testf() {
    int *p = &a;
    // *p = 100; // 常量不能修改值
    printf("%d\n", a);
}

// 局部const修饰常量
void testg() {
    const int b = 10;//数据存放在栈上
    int *p = &b;
    *p = 100;
    printf("%d\n", b);
}
int main() {
    testf();
    testg();
    return 0;
}