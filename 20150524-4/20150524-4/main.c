//
//  main.c
//  20150524-4
//
//  Created by 欣 陈 on 15/5/24.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//第9章 用户自己建立数据类型
//定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年的问题
#include <stdio.h>
struct
{
    int year;
    int month;
    int day;
}date;
int main(){
    int days;
    printf("input year,month,day:");
    scanf("%d,%d,%d",&date.year,&date.month,&date.day);
    switch(date.month){
        case 1:days = date.day;
            break;
        case 2:days = date.day + 31;
            break;
        case 3:days = date.day + 59;
            break;
        case 4:days = date.day + 90;
            break;
        case 5:days = date.day + 120;
            break;
        case 6:days = date.day + 151;
            break;
        case 7:days = date.day + 181;
            break;
        case 8:days = date.day + 212;
            break;
        case 9:days = date.day + 243;
            break;
        case 10:days = date.day + 273;
            break;
        case 11:days = date.day + 304;
            break;
        case 12:days = date.day + 334;
            break;
        default:
            days = -1;
    }
    if(days > 0 && (((date.year % 4 == 0) && (date.year % 100 != 0)) ||
        (date.year % 400 == 0)) && (date.month >=3))
        days = days  + 1;
    printf("%d/%d is the %dth day in %d",date.month,date.day,days,date.year);
    return 0;
}

