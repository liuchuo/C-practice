//
//  main.c
//  20150518-44
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//编写一个程序，将两个字符串s1和s2比较。不要用strcpy函数。
#include <stdio.h>
int main()
{
    int i,resu;
    char s1[100],s2[100];
    printf("input string1:\n");
    gets(s1);
    printf("input string2:\n");
    gets(s2);
    i = 0;
    while(s1[i] == s2[i] && s1[i] != '\0')
        i++;
    if(s1[i] == '\0' && s2[i] == '\0')
        resu = 0;
    else
        resu = s1[i] - s2[i];
    printf("\nresult :%d\n",resu);
    return 0;
}
