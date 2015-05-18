//
//  main.c
//  20150518-30
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//用筛选法求100之内的素数~“埃拉托色尼筛法”
#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,n,a[101];
    for(i = 1;i <= 100;i++)
        a[i] = i;
    a[1] = 0;
    for(i = 2;i < sqrt(100);i++)
        for(j = i + 1;j <= 100;j++)
        {
            if(a[i] != 0 && a[j] != 0)
                if(a[j] % a[i] == 0)
                    a[j] = 0;
        }
    for(i = 2,n = 0;i <= 100;i++)//输出素数
    {
        if(a[i] != 0)
        {
            printf("%5d",a[i]);
            n++;
        }
        if(n == 10)
        {
            printf("\n");
            n = 0;
        }
    }
    return 0;
}
