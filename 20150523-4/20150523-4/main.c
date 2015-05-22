//
//  main.c
//  20150523-4
//
//  Created by 欣 陈 on 15/5/23.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

#include <stdio.h>
#define NEWSIZE 1000

char newbuf[NEWSIZE];
char *newp = newbuf;
char *new(int n){
    if(newp + n <= newbuf + NEWSIZE){
        newp = newp + n;
        return(newp - n);
    }
    else
        return(NULL);
}
