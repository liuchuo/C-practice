//
//  main.c
//  20150521-6
//
//  Created by 欣 陈 on 15/5/21.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//将n个数按输入时顺序的逆序排列，用函数实现
#include <stdio.h>
int main(){
    void sort(char *p,int m);
    int i,n;
    char *p,num[20];
    printf("input n:");
    scanf("%d",&n);
    printf("please input these numbers:\n");
    for(i = 0;i < n;i++)
        scanf("%d",&num[i]);
    p = &num[0];
    sort(p,n);
    printf("now,the sequence is:\n");
    for(i = 0;i < n;i++)
        printf("%d ",num[i]);
    printf("\n");
    return 0;
}

void sort(char *p,int m){
    int i;
    char temp,*p1,*p2;
    for(i = 0;i < m/2;i++){
        p1 = p + i;
        p2 = p + (m -1-i);
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
    }
}
