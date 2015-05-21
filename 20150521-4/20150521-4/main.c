//
//  main.c
//  20150521-4
//
//  Created by 欣 陈 on 15/5/21.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//用指针数组处理上一题目，字符串不等长。
#include <stdio.h>
#include <string.h>
int main(){
    void sort(char *[]);
    int i;
    char *p[10];
    char str[10][20];
    for(i = 0;i < 10;i++)
        p[i] = str[i];
    printf("input 10 strings:\n");
    for(i = 0;i < 10;i++)
        scanf("%s",p[i]);
    sort(p);
    printf("now the sequence is:\n");
    for(i = 0;i < 10;i++)
        printf("%s\n",p[i]);
    return 0;
}

void sort(char *s[]){
    int i,j;
    char *temp;
    for(i = 0;i < 9;i++)
        for(j = 0;j < 9-i;j++)
            if(strcmp(*(s+j),*(s+j+1)) > 0){
                temp = *(s+j);
                *(s+j) = *(s+j+1);
                *(s+j+1) = temp;
            }
}
