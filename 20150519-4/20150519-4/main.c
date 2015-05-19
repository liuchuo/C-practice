//
//  main.c
//  20150519-4
//
//  Created by 欣 陈 on 15/5/19.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//给出年月日，计算该日是该年的第几天
//sum_day计算输入日期的天数~leap函数返回是否是闰年的信息
#include <stdio.h>
int main(){
    int sum_day(int month,int day);
    int leap(int year);
    int year,month,day,days;
    printf("input date<year,month,day>:");
    scanf("%d,%d,%d",&year,&month,&day);
    printf("%d/%d/%d",year,month,year);
    days = sum_day(month,day);
    if(leap(year) && month >= 3)
        days = days + 1;
    printf("is the %dth day in this year:\n",days);
    return 0;
}

int sum_day(int month,int day){
    int day_tab[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    for(i = 1;i < month;i++){
        day += day_tab[i];
    }
    return(day);
}

int leap(int year){
    int leap;
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        leap = 1;
    return(leap);
}