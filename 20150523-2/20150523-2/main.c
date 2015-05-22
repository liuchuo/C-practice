//
//  main.c
//  20150523-2
//
//  Created by 欣 陈 on 15/5/23.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//编写一个函数，实现两个字符串的比较。即自己写一个strcmp函数，函数原型为strcmp(char *p1,char *p2)
#include <stdio.h>
int main(){
    int astrcmp(char *,char *);
    int m;
    char str1[20],str2[20];
    char *p1,*p2;
    printf("input two strings:\n");
    scanf("%s",str1);
    scanf("%s",str2);
    p1 = &str1[0];
    p2 = &str2[0];
    m = astrcmp(p1,p2);
    printf("result:%d\n",m);
    return 0;
}

int astrcmp(char *p1,char *p2){
    int i;
    i = 0;
    while(*(p1 + i) == *(p2 + i))
        if(*(p1 + i++) == '\0')
            return(0);
    return(*(p1 + i) - *(p2 + i));
}
