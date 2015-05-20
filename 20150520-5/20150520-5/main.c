//
//  main.c
//  20150520-5
//
//  Created by 欣 陈 on 15/5/20.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//写一个函数，求一个字符串的长度。
//再main函数中输入字符串，并输出其长度。
#include <stdio.h>
int main(){
    int length(char *p);
    int len;
    char str[20];
    printf("input string:\t");
    scanf("%s",str);
    len = length(str);
    printf("the length of string is %d.\n",len);
    return 0;
}

int length(char *p){
    int n;
    n = 0;
    while(*p != 0){
        n++;
        p++;
    }
    return(n);
}
