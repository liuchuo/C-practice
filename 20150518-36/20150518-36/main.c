//
//  main.c
//  20150518-36
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输出魔方阵
#include <stdio.h>
int main()
{
    int a[15][15],p,i,j,k,n;
    p = 1;
    while(p == 1)
    {
        printf("enter n(n=1~15):");
        scanf("%d",&n);
        if((n != 0) && (n <= 15) && (n % 2 != 0))
            p = 0;
    }
    //初始化
    for(i = 1;i <= n;i++)
        for(j = 1;j <= n;j++)
            a[i][j] = 0;
    //建立魔方阵
    j = n / 2 + 1;
    a[1][j] = 1;//第一行的中间数为1
    for(k = 2;k <= n*n;k++)
    {
        i = i - 1;//魔方阵的规律
        j = j + 1;
        if((i < 1) && (j > n))
        {
            i = i + 2;
            j = j - 1;
        }
        else
        {
            if(i < 1) i = n;
            if(j > n) j = 1;
        }
        if(a[i][j] == 0)
            a[i][j] = k;
        else
        {
            i = i + 2;
            j = j - 1;
            a[i][j] = k;
        }
    }
    //输出魔方阵
    for(i = 1; i <= n;i++)
    {
        for(j = 1; j <= n;j++)
            printf("%5d",a[i][j]);
        printf("\n");
    }
    return 0;
}
