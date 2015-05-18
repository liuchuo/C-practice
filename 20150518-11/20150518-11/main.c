//
//  main.c
//  20150518-11
//  输入4个整数，要求按由小到大的顺序输出。
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//


#include <stdio.h>
int main()
{
    int t,a,b,c,d;
    printf("输入4个数：");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    printf("a=%d,b=%d,c=%d,d=%d",a,b,c,d);
    if(a>b)
    {t=a;a=b;b=t;}
    if(a>c)
    {t=a;a=c;c=t;}
    if(a>d)
    {t=a;a=d;d=t;}//把4个数中最小的放在第一个
    if(b>c)
    {t=b;b=c;c=t;}
    if(b>d)
    {t=b;b=d;d=t;}//把后面三个数中最小的放在第二个
    if(c>d)
    {t=c;c=d;d=t;}//把后面两个数中最小的放在第三个
    printf("由小到大顺序为：\n");
    printf("%d   %d   %d   %d\n",a,b,c,d);
    return 0;
}
