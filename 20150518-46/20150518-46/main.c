//
//  main.c
//  20150518-46
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//用全局变量的方法，分别求两个整数的最大公约数和最小公倍数
//其值不由原函数带回，而是赋值给全局变量Hcf和Lcd
#include <stdio.h>
int Hcf,Lcd;
int main()
{
    void hcf(int,int);
    void lcd(int,int);
    int u,v;
    scanf("%d,%d",&u,&v);
    hcf(u,v);
    lcd(u,v);
    printf("H.C.F = %d\n",Hcf);
    printf("L.C.D = %d\n",Lcd);
    return 0;
}

void hcf(int u,int v)
{
    int t,r;
    if(v > u)
    {
        t = u;
        u = v;
        v = t;
    }
    while((r = u % v) != 0)
    {
        u = v;
        v = r;
    }
    Hcf = v;
}

void lcd(int u,int v)
{
    Lcd = u * v / Hcf;
}
