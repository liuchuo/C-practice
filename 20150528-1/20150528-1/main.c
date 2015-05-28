//
//  main.c
//  20150528-1
//
//  Created by 欣 陈 on 15/5/28.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//从一个整数a中把从右端开始的4~7位取出来
#include <stdio.h>
int main(){
    unsigned a,b,c,d;
    printf("please enter a:");
    scanf("%o",&a);
    b = a>>4;
    c = ~(~0<<4);
    d = b&c;
    printf("%o,%d\n%o,%d",a,a,d,d);
    return 0;
}
