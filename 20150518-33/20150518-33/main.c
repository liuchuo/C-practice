//
//  main.c
//  20150518-33
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//有一个已经排好序的数组，要求输入一个数后，按原来排序的规律将它插入数组中
#include <stdio.h>
int main()
{
    int a[11] = {1,4,6,9,13,16,19,28,40,100};
    int number,temp1,temp2,end,i,j;
    printf("array a:\n");
    for(i = 0;i < 10;i++)
        printf("%5d",a[i]);
    printf("\n");
    printf("insert data:");
    scanf("%d",&number);
    end = a[9];
    if(number>end)
        a[10] = number;
    else
    {
        for(i = 0;i < 10;i++)
        {
            if(a[i] > number)
            {
                temp1 = a[i];
                a[i] = number;//只要检测到的数比number大，就把a[i]的值传给temp1，把a[i]替换成number
                for(j = i + 1;j < 11;j++)
                {
                    temp2 = a[j];
                    a[j] = temp1;
                    temp1 = temp2;
                }
                break;
            }
        }
    }
    printf("now array:\n");
    for(i = 0;i < 11;i++)
        printf("%5d",a[i]);
    printf("\n");
    return 0;
}
