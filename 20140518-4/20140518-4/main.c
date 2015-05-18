//
//  main.c
//  20140518-4
//  用条件语句输出三个数中的最大数
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,c,temp;
    printf("plese enter 3 numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    temp = (a>b)?a:b;
    temp = (temp>c)?temp:c;
    printf("max=%d",temp);
    return 0;
}/*注意输入a,b,c的时候不能用中文的逗号*/
