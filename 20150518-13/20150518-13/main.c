//
//  main.c
//  20150518-13
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//闰年
#include <stdio.h>
int main()
{
    int year;
    printf("请输入年份：");
    scanf("%d",&year);
    if((year%4==0 && year%100!=0) || year%400==0)
        printf("该年为闰年");
    else printf("该年不是闰年");
    return 0;
}
