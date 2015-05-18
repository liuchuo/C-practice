//
//  main.c
//  20150518-29
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//乒乓球比赛的组合逻辑推理问题
#include <stdio.h>
int main()
{
    char i,j,k;
    for(i = 'x';i <= 'z';i++)
        for(j = 'x';j <='z';j++)
            if(i != j)
                for(k = 'x';k <= 'z';k++)
                    if(i != k && j != k)
                        if(i != 'x' && k != 'x' && k != 'z')
                            printf("A——%c\nB——%c\nC——%c\n",i,j,k);
    return 0;
}
