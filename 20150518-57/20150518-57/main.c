//
//  main.c
//  20150518-57
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//用牛顿迭代法求根。
#include <stdio.h>
#include <math.h>
int main()
{
    float solut(float,float,float,float);
    float a,b,c,d;
    printf("input a,b,c,d:");
    scanf("%f,%f,%f,%f",&a,&b,&c,&d);
    printf("the root is x = %f\n",solut(a,b,c,d));
    return 0;
}

float solut(float a,float b,float c,float d)
{
    float x0,x,f,f1;
    x = 1;
    do
    {
        x0 = x;
        f = a*x*x*x + b*x*x + c*x + d;
        f1 = 3*a*x*x + 2*b*x + c;
        x = x0 - f / f1;
    }
    while(fabs(x-x0) >= 1e-3);
    return(x);
}
