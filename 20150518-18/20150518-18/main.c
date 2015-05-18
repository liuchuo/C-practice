//
//  main.c
//  20150518-18
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//计算1~100的和+1~50的各数平方和+1~10的各倒数和的和
#include <stdio.h>
int main()
{
    int n1 = 100,n2 = 50,n3 = 10;
    double k,s1 = 0,s2 = 0,s3 = 0;
    for(k = 1;k <= n1;k++)
    {s1 = s1 + k;}
    for(k = 1;k <= n2;k++)
    {s2 = s2 + k*k;}
    for(k = 1;k <= n3;k++)
    {s3 = s3 + 1/k;}
    printf("结果为%f",s1 + s2 + s3);/*double型函数有小数点的返回用%f*/
    return 0;
}
