#include <stdio.h>



//1.无类型 不i可以通过无类型创建变量 原因 编译器不知道分配多少内存空间
void test4()
{
 // void a =10;
}

//2.用途:限定函数返回值 限定函数参数
int  func(void)
{
    return 0;
}
void test5()
{
    func();
}

//3.void* 万能指针
void test6()
{

    void * p = NULL;
    //printf("p的内存大小:%d\n",sizeof(p));  void sizeof  4个字节
    int *pInt = NULL;
    char *pChar = NULL;
    pChar = (char*)pInt;//不同类型的指针 需要强制类型转换才不会警告
    pChar = p; //不通过强制类型转换 就可以转为任意类型指针
}



int main() {





    return 0;
}