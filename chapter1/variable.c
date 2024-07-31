#include <stdio.h>

void testa()
{
    int a = 10;
    a = 20; //直接修改

    int *p = &a; // 间接修改
    *p = 200;   //*p 解引用
    printf("a = %d\n",a);
}

struct Person
{
    char a;
    int b;
    char c;
    int d;
};

void testb()
{
    struct Person p1 = {'a',10,'b',20};
    p1.d = 100; //直接修改d属性
    printf("%d\n",p1.d);

    struct Person *p = &p1;
    p->d = 1000; //间接修改属性
    printf("%d\n",p1.d);

}
int main()
{

    testa();
    testb();

    return 0;
}
