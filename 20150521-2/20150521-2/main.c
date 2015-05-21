//
//  main.c
//  20150521-2
//
//  Created by 欣 陈 on 15/5/21.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//在主函数中输入10个等长的字符串，用另一个函数对它们排序。然后在主函数中输出这10个已排好序的字符串
#include <stdio.h>
#include <string.h>
int main(){
    void sort(char [][6]);
    int i;
    char str[10][6];
    printf("input 10 strings:\n");
    for(i = 0;i < 10;i++)
        scanf("%s",str[i]);
    sort(str);
    printf("now,the sequence is:\n");
    for(i = 0;i < 10;i++)
        printf("%s\n",str[i]);
    return 0;
}

void sort(char s[10][6]){
    int i,j;
    char *p,temp[10];
    p = temp;
    for(i = 0;i < 9;i++)
        for(j = 0;j < 9-i;j++)
            if(strcmp(s[j],s[j+1]) > 0){
                strcpy(p,s[j]);
                strcpy(s[j],s[j+1]);
                strcpy(s[j+1],p);
            }
}