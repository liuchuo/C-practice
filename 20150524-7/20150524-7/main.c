//
//  main.c
//  20150524-7
//
//  Created by 欣 陈 on 15/5/24.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//解法二：输出年月日是第几天
#include <stdio.h>
struct y_m_d{
    int year;
    int month;
    int day;
}date;
int main(){
    int days(int year,int month,int day);
    int sum;
    printf("input year,month,day:");
    scanf("%d,%d,%d",&date.year,&date.month,&date.day);
    sum = days(date.year,date.month,date.day);
    printf("%d/%d is the %dth day in %d.\n",date.month,date.day,sum,date.year);
    return 0;
}

int days(int year,int month,int day){
    int day_tab[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int sum;
    int i;
    sum = 0;
    for(i = 1;i < month;i++){
        sum += day_tab[i];
    }
    sum += day;
    if(((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month >= 3)
        sum += 1;
    return(sum);
}
