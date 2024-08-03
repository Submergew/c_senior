//
// Created by wangz on 2024/8/2.
//
#include <stdio.h>
#include <string.h>



void test1()
{
    char buf[1024];
    memset(buf,0,1024);

    //参数1 格式化后目标字符串
    //参数2 格式化形式
    sprintf(buf,"今天是%d年 %d月 %d日\n",2024,8,3);

    printf("%s\n",buf);

    //2.拼接字符串
    memset(buf,0,1024);
    char str1[] = "hello";
    char str2[] = "world";
    int len = sprintf(buf, "%s %s",str1,str2);
    //返回值是strlen的结果
    printf("buf:%s len:%d\n",buf,len);
}


int main()
{
    test1();

    return 0;
}