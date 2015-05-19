//
//  main.c
//  2010520-2
//
//  Created by 欣 陈 on 15/5/20.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输入三个字符串，按照由小到大的顺序输出
#include <stdio.h>
#include <string.h>
int main(){
    void swap(char *,char *);
    char str1[20],str2[20],str3[20];
    printf("input three line :\n");
    gets(str1);
    gets(str2);
    gets(str3);
    if(strcmp(str1,str2) > 0)
        swap(str1,str2);
    if(strcmp(str1,str3) > 0)
        swap(str1,str3);
    if(strcmp(str2,str3) > 0)
        swap(str2,str3);
    printf("now the order is:\n%s\n%s\n%s\n",str1,str2,str3);
    return 0;
}

void swap(char *p1,char *p2){
    char p[20];
    strcpy(p,p1);
    strcpy(p1,p2);
    strcpy(p2,p);
}