//
//  main.c
//  20150518-6
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

#include <stdio.h>
int main()
{
    int x,y;
    printf("输入x:");
    scanf("%d",&x);
    if(x<1){
        y=x;
        printf("x=%3d,y=x=%d\n",x,y);
    }
    
    else if(x>=10){
        y=3*x-11;
        printf("x=%d,x=3x-11=%d",x,y);
    }
    
    else {
        y=2*x-1;
        printf("x=%d,y=2x-1=%d",x,y);
    }
    return 0;
}/*if else 的复合语句不要忘记加花括号~~~*/
