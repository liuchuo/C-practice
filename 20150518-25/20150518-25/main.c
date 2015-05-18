//
//  main.c
//  20150518-25
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//迭代~
#include <stdio.h>
#include <math.h>
int main()
{
    float a,x0,x1;
    printf("请输入a：");
    scanf("%f",&a);
    x0 = a / 2;
    x1 = (x0 + a / x0) / 2;
    do
    {
        x0 = x1;
        x1 = (x0 + a / x0) / 2;
    }while(fabs(x0 - x1) >= 1e-5);
    printf("the square root of %5.2f is %8.5f\n",a,x1);
    return 0; 
}
