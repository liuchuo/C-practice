//
//  main.c
//  20150518-28
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输出菱形的星星图案
#include <stdio.h>
int main()
{
    int i,j,k;
    for(i = 0;i <= 3;i++)//i表示当前输入的行数，先输前4行
    {
        for(j = 0;j <= 2-i;j++)
            printf(" ");
        for(k = 0;k <= 2*i;k++)
            printf("*");
        printf("\n");
    }
    for(i = 0;i <=2;i++)
    {
        for(j = 0;j <= i;j++)
            printf(" ");
        for(k = 0;k <= 4 - 2 * i;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
