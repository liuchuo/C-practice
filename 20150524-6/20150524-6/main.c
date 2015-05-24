//
//  main.c
//  20150524-6
//
//  Created by 欣 陈 on 15/5/24.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//


//写一个函数days，实现第1题的运算。由主函数将年、月、日传递给days函数，计算后将日子数传回主函数输出
#include <stdio.h>
struct y_m_d{
    int year;
    int month;
    int day;
}date;
int main(){
    int days(struct y_m_d date1);
    printf("input year,month,day:");
    scanf("%d,%d,%d",&date.year,&date.month,&date.day);
    printf("%d/%d is the %dth days in %d",date.month,date.day,days(date),date.year);
    return 0;
}

int days(struct y_m_d date1){
    int sum;
    switch(date1.month){
        case 1:sum = date1.day;
            break;
        case 2:sum = date1.day + 31;
            break;
        case 3:sum = date1.day + 59;
            break;
        case 4:sum = date1.day + 90;
            break;
        case 5:sum = date1.day + 120;
            break;
        case 6:sum = date1.day + 151;
            break;
        case 7:sum = date1.day + 181;
            break;
        case 8:sum = date1.day + 212;
            break;
        case 9:sum = date1.day + 243;
            break;
        case 10:sum = date1.day + 273;
            break;
        case 11:sum = date1.day + 304;
            break;
        case 12:sum = date1.day + 334;
            break;
        default :sum = -1;
    }
    if(((sum > 0 && (date1.year % 4 == 0) && (date1.year % 100 != 0))
        || (date1.year % 400 == 0)) && (date1.month >= 3))
        sum += 1;
    return(sum);
}
