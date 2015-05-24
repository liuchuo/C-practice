//
//  main.c
//  20150524-1
//
//  Created by 欣 陈 on 15/5/24.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//写一个函数free，将前面用new函数占用的空间释放。free(p)表示将p（地址）指向单元以后的内存段释放。
#include <stdio.h>
#define NEWSIZE 1000

char newbuf[NEWSIZE];
char *newp = newbuf;

void free(char *p){
    if(p >= newbuf && p <newbuf+NEWSIZE)
        newp = p;
}
