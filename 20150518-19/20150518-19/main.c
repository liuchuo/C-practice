//
//  main.c
//  20150518-19
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输出所有水仙花数
#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("水仙数有：\n");
    for(n = 100;n < 1000;n++)
    {
        i = n / 100;
        j = n / 10 - i * 10;
        k = n % 10;
        if(n == i * i * i + k * k *k + j * j * j)
            printf("%d\n",n);
    }
    return 0;
}
