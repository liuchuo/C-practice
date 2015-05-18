//
//  main.c
//  20150518-3
//  if语句解输出三个数的最大值
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("请输入三个数：");
    scanf("%d,%d,%d",&a,&b,&c);
    max=a;
    if(max<b)
        max=b;
    if(max<c)
        max=c;
    printf("max=%d",max);
    return 0;
}
