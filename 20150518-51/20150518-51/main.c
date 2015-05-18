//
//  main.c
//  20150518-51
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//写一个函数，将两个字符串连接
#include <stdio.h>
int main()
{
    void concatenate(char string1[],char string2[],char string[]);
    char s1[100],s2[100],s[100];
    printf("input string1:\n");
    scanf("%s",s1);
    printf("input string2:\n");
    scanf("%s",s2);
    concatenate(s1,s2,s);
    printf("the new string is :%s\n",s);
    return 0;
}

void concatenate(char string1[],char string2[],char string[])
{
    int i,j;
    for(i = 0;string1[i] != '\0';i++)
        string[i] = string1[i];
    for(j = 0;string2[j] != '\0';j++)
        string[i+j] = string2[j];
    string[i+j] = '\0';
}
