//
//  main.c
//  20150518-40
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输出平行四边*形图案
#include <stdio.h>
int main()
{
    char a[5] = {'*','*','*','*','*'};
    int i,j,k;
    char space = ' ';
    for(i = 0;i < 5;i++)
    {
        printf("\n");
        for(j = 1;j <= i;j++)
            printf("%c",space);
        for(k = 0;k < 5;k++)
            printf("%c",a[k]);
    }
    printf("\n");
    return 0;
}
