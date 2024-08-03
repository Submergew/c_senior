//
// Created by wangz on 2024/8/3.
//

#pragma once
#include <stdio.h>
#include <stdlib.h>

//节点结构体
struct LinkNode {
    //数据域
    int num;
    //指针域
    struct LinkNode *next;
};

//初始化链表
//函数返回值的 创建好的链表的头节点
struct LinkNode *init_LinkList() {
    struct LinkNode *pHeader = malloc(sizeof(struct LinkNode));
    if (pHeader == NULL) {

        return NULL;
    }
    //头节点不维护数据域
    pHeader->num = -1;
    pHeader->next = NULL;

    //创建尾节点指针 用户记录当前链表尾部节点位置，方便做尾插
    struct LinkNode *pTail = pHeader;

    int val = -1;
    while (1) {

        printf("请插入数据，输入-1代表插入结束");
        scanf_s("%d", &val);

        if (val == -1) {

            break;
        }



        //创建新节点
        struct LinkNode *newNode = malloc(sizeof(struct LinkNode));
        newNode->num = val;
        newNode->next = NULL;

        //更新节点的指向
        pTail->next = newNode;
        pTail = newNode;
    }
}


int main() {


    return 0;
}