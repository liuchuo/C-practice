//
//  main.c
//  20150518-37
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//找出一个二维数组的鞍点
//鞍点即在该位置上的元素在该行上最大，在该列上最小
//也可能没有鞍点
#include <stdio.h>
#define N 4
#define M 5
int main()
{
    int i,j,k,a[N][M],flag,max,maxj;
    printf("plese input matrix:\n");
    for(i = 0;i < N;i++)
        for(j = 0;j < M;j++)
            scanf("%d",&a[i][j]);
    for(i = 0;i < N;i++)
    {
        max = a[i][0];
        maxj = 0;
        for(j = 0;j < M;j++)
            if(a[i][j] > max)
            {
                max = a[i][j];
                maxj = j;
            }
        flag = 1;
        for(k = 0;k < N;k++)
        {
            if(max > a[k][maxj])
            {
                flag = 0;
                continue;
            }
        }
        if(flag)
        {
            printf("a[%d][%d]=%d\n",i,maxj,max);
            break;
        }
    }
    if(!flag)
        printf("It is not exist!\n");
    return 0;
}
