//
//  main.c
//  20150518-43
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//编一个程序，将两个字符串连接起来，不要用strcat函数。16.12
#include <stdio.h>
int main()
{
    char s1[80],s2[40];
    int i,j;
    printf("input string1:\n");
    scanf("%s",s1);
    printf("input string2:\n");
    scanf("%s",s2);
    i = 0;
    j = 0;
    while(s1[i] != '\0')
        i++;
    while(s2[j] != '\0')
        s1[i++] = s2[j++];
    s1[i] = '\0';
    printf("\nThe new string is:%s\n",s1);
    return 0;
}
