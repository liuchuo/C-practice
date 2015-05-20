//
//  main.c
//  11
//
//  Created by 欣 陈 on 15/5/20.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//n个人围成一圈，顺序排号。从第一个人开始报数123，凡包到3的人退出圈子，问最后留下的是原来第几号的那位
//i为每次循环的计数变量，k为按1，2，3计数变量，m为退出的人数
#include <stdio.h>
int main(){
    int i,k,m,n,num[50],*p;
    printf("\ninput number of person:n = ");
    scanf("%d",&n);
    p = num;
    for(i = 0;i < n;i++)
        *(p + i) = i + 1;
    i = 0;
    k = 0;
    m = 0;
    while(m < n - 1){
        if(*(p+i) != 0)
            k++;
        if(k == 3){
            *(p+i) = 0;
            k = 0;
            m++;
        }
        i++;
        if(i == n)
            i = 0;
    }
    while(*p == 0)
        p++;
    printf("the last one is NO.%d\n",*p);
    return 0;
}