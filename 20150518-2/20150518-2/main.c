//
//  main.c
//  20150518-2
//  输出abc三个数中的最大数，用选择结构
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("请输入三个数：");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a<b)
        if(b<c)
            printf("max=%d\n",c);
        else
            printf("max=%d\n",b);
        else
            if(a<c)
                printf("max=%d\n",c);
            else
                printf("max=%d\n",a);
    return 0;
}
/*a<b  -> b<c  == c
 -> b>=c == b
 else
 a>=b -> a<c  == c
 -> a>=c == a*/

