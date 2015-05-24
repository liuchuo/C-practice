//
//  main.c
//  20150524-5
//
//  Created by 欣 陈 on 15/5/24.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//解法二：定义一个结构体变量（包括年、月、日）。计算该日在本年中是第几天，注意闰年的问题
#include <stdio.h>
struct{
    int year;
    int month;
    int day;
}date;
int main(){
    int i,days;
    int day_tab[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    printf("input year,month,day:");
    scanf("%d,%d,%d",&date.year,&date.month,&date.day);
    days = 0;
    for(i = 1;i < date.month;i++){
        days = days + day_tab[i];
    }
    days = days + date.day;
    if(((date.year % 4 == 0 && date.year % 100 != 0) ||
        date.year % 400 == 0) && date.month >= 3)
        days = days + 1;
    printf("%d/%d is the %dth day in %d.\n",date.month,date.day,days,date.year);
    return 0;
}
