//
//  main.c
//  20150518-62
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//啤酒每罐2.3元，饮料每罐1.9元。小明买了若干啤酒和饮料，一共花了82.3元。
//我们还知道他买的啤酒比饮料的数量少，请你计算他买了几罐啤酒。
#include <stdio.h>
int main()
{
    int i,j;
    int sum;
    for(i = 1;i < 50;i++)
        for(j = 1;j < 50;j++)
        {
            sum = 23 * i + 19 * j;
            if(sum == 823 && i < j)
            {
                printf("i = %d,j = %d\n",i,j);
            }
        }
    return 0;
}
