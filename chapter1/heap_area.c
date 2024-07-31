//
// Created by wangz on 2024/7/31.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void allocatespace(char *pp)
{
    char *temp = malloc(100);
    memset(temp ,0,100);
    strcpy(temp,"hello world");
    pp = temp;

}

void testc() {
    char *p = NULL;
    allocatespace(p);
    printf("p = %s\n",p);
}


void allocatespace2(char **pp)
{
    char *temp = malloc(100);
    memset(temp ,0,100);
    strcpy(temp,"hello world");
    *pp = temp;
}

void testd() {
    char *p = NULL;
    allocatespace2(&p);
    printf("p2 = %s\n",p);
}




int main()
{
   testc();
   testd();
    return 0;
}