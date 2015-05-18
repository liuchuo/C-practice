//
//  main.c
//  20150518-49
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//写一个函数，使给定的一个3x3的二维整型数组转置，即行列互换。
#include <stdio.h>
#define N 3
int array[N][N];
int main()
{
    void convert(int array[][3]);
    int i,j;
    printf("input the array:\n");
    for(i = 0;i < N;i++)
        for(j = 0;j < N;j++)
            scanf("%d",&array[i][j]);
    printf("\noriginal array:\n");
    for(i = 0;i < N;i++)
    {
        for(j = 0;j < N;j++)
            printf("%d",array[i][j]);
        printf("\n");
    }
    convert(array);
    printf("convert array:\n");
    for(i = 0;i < N;i++)
    {
        for(j = 0;j < N;j++)
            printf("%d",array[i][j]);
        printf("\n");
    }
				return 0;
}

void convert(int array[][3])
{
    int i,j,t;
    for(i = 0;i < N;i++)
        for(j = i+1;j < N;j++)
        {
            t = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = t;
        }
}
