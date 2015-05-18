//
//  main.c
//  20150518-47
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//求方程ax^2+bx+c=0的解
#include <stdio.h>
#include <math.h>
float x1,x2,disc,p,q;
int main()
{
    void greater_than_zero(float,float);
    void equal_to_zero(float,float);
    void smaller_than_zero(float,float);
    float a,b,c;
    printf("input a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    printf("equation:%fx^2+%fx+%f",a,b,c);
    disc = b * b - 4*a*c;
    printf("root = \n");
    if(disc > 0)
    {
        greater_than_zero(a,b);
        printf("x1 = %f\t\t x2 = %f\n",x1,x2);
    }
    else if(disc == 0)
    {
        equal_to_zero(a,b);
        printf("x1=%f\t\t x2=%f\n",x1,x2);
    }
    else
    {
        smaller_than_zero(a,b);
        printf("x1=%f+%fi\t x2=%f-%fi\n",p,q,p,q);
    }
    return 0;
}

void greater_than_zero(float a,float b)
{
    x1 = (-b+sqrt(disc)) / (2 * a);
    x2 = (-b-sqrt(disc)) / (2 * a);
}

void equal_to_zero(float a,float b)
{
    x1 = (-b) / (2 * a);
    x2 = (-b) / (2 * a);
}

void smaller_than_zero(float a,float b)
{
    p = (-b) / (2 * a);
    q = sqrt(-disc) / (2 * a);
}
