//
// Created by wangz on 2024/8/1.
//
#include <stdio.h>

// 栈的生长方向

void testi() {
    int a = 10;//栈底  高地址
    int b = 10;
    int c = 10;
    int d = 10;//栈顶  低地址

    printf("%d\n", &a);
    printf("%d\n", &b);
    printf("%d\n", &c);
    printf("%d\n", &d);
}

// 内存存储方式
void testj() {
    int a = 0x11223344;
    char *p = &a;
    printf("%x", *p); // 44  ---- 低位字节 ----- 低地址
    printf("%x", *(p+1)); // 33  ---- 低位字节 ----- 高地址
    printf("%x", *(p+2)); // 22  ---- 低位字节 ----- 高地址
    printf("%x", *(p+3)); // 11  ---- 低位字节 ----- 高地址

}

int main() {
    testi();
    testj();
    return 0;
}