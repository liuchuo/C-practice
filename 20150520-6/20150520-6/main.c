//
//  main.c
//  20150520-6
//
//  Created by 欣 陈 on 15/5/20.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//有一个字符串，包含n个字符，写一函数，将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。
#include <stdio.h>
#include <string.h>
int main(){
    void copystr(char *,char *,int);
    int m;
    char str1[20],str2[20];
    printf("input string:");
    gets(str1);
    printf("which character that begin to copy?");
    scanf("%d",&m);
    if(strlen(str1) < m)
        printf("input error!");
    else{
        copystr(str1,str2,m);
        printf("result:%s\n",str2);
    }
    return 0;
}

void copystr(char *p1,char *p2,int m){
    int n;
    n = 0;
    while(n < m-1){
        n++;
        p1++;
    }
    while(*p1 != '\0'){
        *p2 = * p1;
        p1++;
        p2++;
    }
    *p2 = '\0';
}
