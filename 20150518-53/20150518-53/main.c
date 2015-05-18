//
//  main.c
//  20150518-53
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//写一个函数，输入一个4位数字。要求输出这4个数字字符。但每两个数字间空一个空格
#include <stdio.h>
#include <string.h>
int main()
{
    void insert(char []);
    char str[80];
    printf("input four digits:\n");
    scanf("%s",str);
    insert(str);
    return 0;
}

void insert(char str[])
{
    int i;
    for(i = strlen(str);i > 0;i--)
    {
        str[2*i] = str[i];
        str[2*i-1] = ' ';
    }
    printf("output:\n%s\n",str);
}
