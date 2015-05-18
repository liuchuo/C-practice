//
//  main.c
//  20150518-48
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//写一个判断素数的函数，在主函数里输入一个数，输出判断结果
#include <stdio.h>
int main()
{
    int prime(int);
    int a;
    printf("输入一个数：\n");
    scanf("%d",&a);
    if(prime(a))
        printf("%d is a prime.\n",a);
    else
        printf("%d is not a prime.\n",a);
    return 0;
}

int prime(int n)
{
    int flag = 1,i;
    for(i = 2;i < n/2 && flag == 1;i++)
    {
        if(n % i == 0)
            flag=0;
    }
    return(flag);
}
