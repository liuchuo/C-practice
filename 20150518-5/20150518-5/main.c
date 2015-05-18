//
//  main.c
//  20150518-5
//  输入一个小于1000的数，并输出它的平方根的整数部分
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//


#include <stdio.h>
#include <math.h>
#define M 1000
int main()
{
    int i,k;
    printf("请输入一个小于%d的整数i：",M);
    scanf("%d",&i);
    while(i>M)
    {
        printf("输入的数不合法，请重新输入一个小于%d的整数i：",M);
        scanf("%d",&i);
    }
    k=sqrt(i);
    printf("%d的平方根的整数部分为%d",i,k);
    return 0;
}
