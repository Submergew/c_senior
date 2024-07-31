
#include <stdio.h> //标准输入输出
#include <stdlib.h>// 字符串处理函数 strcpy strcmp strcat
#include <string.h>//标准库函数 malloc free

//1.typedef使用 可以简化struct关键字
struct Person {
    char name[64];//名字
    int age;      //年龄
};
typedef struct Person Mypeeaon;

void test1() {
    struct Person p1 = {"zhangsan", 18};
    Mypeeaon p2 = {"lisi", 20};
}
Mypeeaon;

//2.区分数据类型
void test2()
{
    //char *p1,p2;  p1类型:char*  p2类型:char

    typedef char*PCHAR;

    PCHAR p1,p2;
}

//3.提高移植性
typedef long long MY_INT;
void test3()
{
    MY_INT a = 10;
    MY_INT b = 10;

}

int main() {


    return 0;
}