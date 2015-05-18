//
//  main.c
//  20150518-14
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//  输入两个正整数m,n，求其最大公约数和最小公倍数
#include <stdio.h>
int main()
{
    int m,n,r,p,temp;
    printf("请输入m,n两个数：");
    scanf("%d,%d",&m,&n);
    p = m * n;
    if(n < m)
    {
        temp = m;
        m = n;
        n = temp;
    }
    while(m != 0)
    {
        r = n % m;//大数m取余小数n
        n = m;//小数的值传给n
        m = r;//余的结果传给m，直到取余结果为0
    }
    printf("他们的最大公约数为%d\n",n);//最大公约数为n
    printf("他们的最小公倍数为%d\n",p/n);//最大公倍数 = m * n / 最大公约数
    return 0;
}
