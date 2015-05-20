//
//  main.c
//  20150520-7
//
//  Created by 欣 陈 on 15/5/20.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输入一行文字，找出其中大写字母，小写字母，空格，数字以及其他字符各有多少。
#include <stdio.h>
int main(){
    int upper = 0;
    int lower = 0;
    int digit = 0;
    int space = 0;
    int other = 0;
    int i = 0;
    char *p;
    char s[20];
    printf("input string:	");
    while((s[i]=getchar()) != '\n')
        i++;
    p = &s[0];
    while(*p != '\n'){
        if((*p >= 'a') && (*p <= 'z'))
            lower++;
        else if((*p >= 'A') && (*p <= 'Z'))
            upper++;
            else if(*p == ' ')
                space++;
            else if((*p >= '0') && (*p <= '9'))
                digit++;
            else
                other++;
        p++;
    }
    printf("upper case:%d 	lower case:%d",upper,lower);
    printf("	space:%d 	digit:%d 	other:%d\n",space,digit,other);
    return 0;
}