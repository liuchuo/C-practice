//
//  main.c
//  20150518-58
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//用递归方法求n阶勒让德多项式的值
#include <stdio.h>
int main()
{
    float p(int,int);
    int n,x;
    printf("input n & x:");
    scanf("%d %d",&n,&x);
    printf("n=%d,x=%d\n",n,x);
    printf("p%d(%d) = %f\n",n,x,p(n,x));
    return 0;
}

float p(int n,int x)
{
    if(n == 0)
        return(1);
    else if(n == 1)
        return(x);
    else
        return((2*n-1)*x*p((n-1),x) -(n-1)*p((n-2),x)/n);
}