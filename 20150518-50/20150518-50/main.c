//
//  main.c
//  20150518-50
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//写一个函数，使输入的一个字符串按反序存放。在主函数中输入和输出字符串
#include <stdio.h>
#include <string.h>
int main()
{
    void inverse(char str[]);
    char str[100];
    printf("input string:");
    scanf("%s",str);
    inverse(str);
    printf("inverse string:%s\n",str);
    return 0;
}

void inverse(char str[])
{
    char t;
    int i,j;
    for(i = 0,j = strlen(str);i < strlen(str)/2;i++,j--)
    {
        t = str[i];
        str[i] = str[j-1];
        str[j-1] = t;
    }
}
