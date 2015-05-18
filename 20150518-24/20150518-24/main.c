//
//  main.c
//  20150518-24
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//猴子吃桃问题~~迭代~~
#include <stdio.h>
int main()
{
    int day,x1,x2;
    x2 = 1;
    day = 9;
    while(day > 0)
    {
        x1 = (x2 + 1) * 2;
        x2 = x1;
        day--;
    }
    printf("total = %d\n",x2);
    return 0; 
}
