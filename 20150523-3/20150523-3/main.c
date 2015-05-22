//
//  main.c
//  20150523-3
//
//  Created by 欣 陈 on 15/5/23.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//编一个程序，输入月份号，输出该月的英文月名。要求用指针数组处理。
#include <stdio.h>
int main(){
    char *month_name[12]={"January","February","March",
        "April","May","June","July","August","Setemper","October","November","December"};
    int n;
    printf("input month:\n");
    scanf("%d",&n);
    if((n <= 12) && (n >= 1))
        printf("It is %s.\n",*(month_name + n-1));
    else
        printf("It is wrong.\n");
    return 0;
}
