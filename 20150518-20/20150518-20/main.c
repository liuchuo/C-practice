//
//  main.c
//  20150518-20
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//
//一个数恰好等于它的因子之和，这个数称为完数。找出1000以内所有完数，并输出其所有因子
#include <stdio.h>
int main()
{
    int m,s,i;
    for(m = 2;m < 1000;m++)//m为2~1000之间所有数循环~~
    {
        s = 0;
        for(i = 1;i < m;i++)//查数为m的所有因子
            if(m % i == 0)
                s = s + i;//把因子相加
        if(s == m)
        {
            printf("%d,它的因子是：",m);
            for(i = 1;i < m;i++)//输出所有因子的循环
                if(m%i == 0) printf("%d",i);
            printf("\n");
        }
    }
    return 0;
}
