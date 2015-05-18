//
//  main.c
//  20150518-27
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//
//用二分法求解方程的根
#include <stdio.h>
#include <math.h>
int main()
{
    float x0,x1,x2,fx0,fx1,fx2;
    do
    {
        printf("enter x1 & x2 :");
        scanf("%f,%f",&x1,&x2);
        fx1 = x1 * ((2 * x1 - 4) * x1 + 3) - 6;
        fx2 = x2 * ((2 * x2 - 4) * x2 + 3) - 6;
    }while(fx1 * fx2 > 0);
    do
    {
        x0 = (x1 + x2) / 2;
        fx0 = x0 * ((2 * x0 -4) * x0 + 3) - 6;
        if((fx0 * fx1) < 0)
        {
            x2 = x0;
            fx2 = fx0;
        }
        else
        {
            x1 = x0;
            fx1 = fx0;
        }
    }while(fabs(fx0)>= 1e-5);
    printf("x = %6.2f\n",x0);
    return 0;
}//while~~printf~~~
