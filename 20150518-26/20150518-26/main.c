//
//  main.c
//  20150518-26
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//用牛顿迭代法计算方程的根
#include <stdio.h>
#include <math.h>
int main()
{
    double x1,x0,f,f1;
    x1 = 1.5;
    do
    {
        x0 = x1;
        f = 2*x0*x0*x0 - 4*x0*x0 + 3*x0 - 6;
        f1 = 6*x0*x0 - 8*x0 + 3;
        x1 = x0 - f / f1;
    }while(fabs(x1 - x0) >= 1e-5);
    printf("the root of equation is %5.2f",x1);
    return 0;
}//公式x1 = x0 - f / f'
