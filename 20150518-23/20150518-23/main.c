//
//  main.c
//  20150518-23
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//弹球~~
#include <stdio.h>
int main()
{
    double sn = 100,hn = 50;
    int i;
    for(i = 0; i < 9; ++i)
    {
        sn = sn + hn * 2;
        hn = hn / 2;
    }
    printf("第10次落地时共经过%f米\n",sn);
    printf("第10次弹起的高度为%f米\n",hn);
    return 0; 
}
