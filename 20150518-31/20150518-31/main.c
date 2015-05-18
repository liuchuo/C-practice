//
//  main.c
//  20150518-31
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//用选择法对10个整数排序
#include <stdio.h>
int main()
{
    int i,j,min,temp,a[11];
    printf("enter data:\n");
    for(i = 1;i <= 10;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);/*输入乱序*/
    }
    printf("\n");
    printf("the orginal numbers:\n");
    for(i = 1;i <= 10;i++)
        printf("%5d",a[i]);
    printf("\n");/*输出乱序*/
    for(i = 1;i <= 9;i++)
    {
        min = i;
        for(j = i + 1;j <= 10;j++)
            if(a[min] > a[j]) min = j;
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    printf("the sorted numbers:\n");/*输出顺序~*/
    for(i = 1;i <= 10;i++)
        printf("%5d",a[i]);
    printf("\n");
    return 0;
}
