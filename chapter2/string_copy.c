//
// Created by wangz on 2024/8/2.
//
#include <stdio.h>
#include <string.h>

// 字符串拷贝

// 第一种实现方式
void copystring1(char* dest,char* source)
{
    //利用下标方式拷贝
    int len = strlen(source);
    for (int i = 0;i < len;i++)
    {
        dest[i] = source[i];
    }
    dest[len] = '\0';
}

//第二种实现方式
void copystring2(char* dest,char* source)
{
    //利用字符串指针
    while (*source != '0')
    {
        *dest = *source;

        dest++;
        source++;
    }

    *dest = '0';

}

//第三种实现方式
void copystring3(char* dest,char* source)
{
    while (*dest++ = *source++)
    {}
}

void test1  ()
{
    char *str = "hello world";
    char buf[1024];
    copystring1(buf, str);
    copystring2(buf, str);
    printf("buf = %s\n",buf);
}


int main()
{
    test1();
    return 0;
}