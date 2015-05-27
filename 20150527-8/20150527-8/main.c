//
//  main.c
//  20150527-8
//
//  Created by 欣 陈 on 15/5/27.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//


//第11章 预处理指令
//使用宏，求圆周长、圆面积和圆球面积
#include <stdio.h>
#define PI 3.1415926
#define CIRCLE(R,L,S,V) L=2*PI*R;S=PI*R*R;V=4.0/3.0*PI*R*R*R
int main(){
    double r,l,s,v;
    printf("please enter r:");
    scanf("%lf",&r);
    CIRCLE(r,l,s,v);
    printf("r = %6.3lf\n l = %6.2lf\n s = %6.2lf\n v = %6.2lf\n",r,l,s,v);
    return 0;
}