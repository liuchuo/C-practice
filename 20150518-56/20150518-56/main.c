//
//  main.c
//  20150518-56
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//写一个函数，用起泡法对输入的10个字符按由小到大的顺序排列
#include <stdio.h>
#include <string.h>
#define N 10
char str[N];
int main()
{
    void sort(char []);
    int i,flag;
    for(flag = 1;flag == 1;)
    {
        printf("input string:\n");
        scanf("%s",str);
        if(strlen(str) > N)
            printf("the string too long,please input again~");
        else
            flag = 0;
    }
    sort(str);
    printf("string sorted:\n");
    for(i = 0;i < N;i++)
        printf("%c",str[i]);
    return 0;
}

void sort(char str[])
{
    int i,j;
    char c;
    for(j = 1;j < N;j++)
        for(i = 0;(i < N-j) && (str[i] != '\0');i++)
            if(str[i] > str[i+1])
            {
                c = str[i];
                str[i] = str[i+1];
                str[i+1] = c;
            }
}
