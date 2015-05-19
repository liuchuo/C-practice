//
//  main.c
//  20150520-1
//
//  Created by 欣 陈 on 15/5/20.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//
//第八章 善于利用指针
//输入三个整数 按由小到大顺序输出
#include <stdio.h>
int main(){
    void swap(int *p1,int *p2);//因为*p1后面写成了分号，一下子出来7个错误好可怕~吓= =
    int a,b,c;
    int *p1,*p2,*p3;
    printf("input three inetger a,b,c:");
    scanf("%d,%d,%d",&a,&b,&c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    if(a > b) swap(p1,p2);
    if(a > c) swap(p1,p3);//把a的地址变为最小值的地址~
    if(b > c) swap(p2,p3);//把b的地址变为次小值的地址~
    printf("Now the order is:%d,%d,%d",a,b,c);
    return 0;
}

void swap(int *p1,int *p2){
    int t;
    t = *p1;
    *p1 = *p2;
    *p2 = t;
}
