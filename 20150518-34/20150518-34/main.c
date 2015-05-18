//
//  main.c
//  20150518-34
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//数组中所有的值逆序重新存放
#include <stdio.h>
#define N 5
int main()
{
    int a[N],i,temp;
    printf("enter array a:\n");
    for(i = 0;i < N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array a : \n");
    for(i = 0;i < N;i++)
    {
        printf("%d",a[i]);
    }
    for(i = 0;i < N/2;i++)//把左右两边对称的数交换即可~~
    {
        temp = a[i];
        a[i] = a[N-i-1];
        a[N-i-1] = temp;
    }
    printf("\nnow array\n");
    for(i = 0;i < N;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
