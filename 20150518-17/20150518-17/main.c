//
//  main.c
//  20150518-17
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//求1！+2！+3！+⋯⋯+20！的值
#include <stdio.h>
int main()
{
    double s = 0,t = 1;
    int n;
    for(n = 1;n<=20;n++)
    {
        t = t * n;
        s = s + t;
    }
    printf("1!+2!+3!+⋯⋯+20!=%22.15e\n",s);/*%e表示以指数形式输出单、双精度实数*/
    return 0;
}
