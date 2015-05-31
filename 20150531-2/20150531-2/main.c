//
//  main.c
//  20150531-2
//
//  Created by 欣 陈 on 15/5/31.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//一个学习小组有五个人，每人有3门课的考试成绩，求全组分科的平均成绩和各科总平均成绩
#include <stdio.h>
int main(){
    int v[3],aver,l;
    int a[5][3],i,j;
    aver = 0;
    for(i = 0;i < 5;i++)
        for(j = 0;j < 3;j++)
            scanf("%d",&a[i][j]);
    for(j = 0;j < 3;j++){
        for(i = 0;i < 5;i++)
            aver = aver + a[i][j];
        v[j] = aver / 5;
        aver = 0;
    }
    l = (v[0] + v[1] + v[2]) / 3;
    printf("k1:%d\nk2:%d\nk3:%d\nl:%d\n",v[0],v[1],v[2],l);
    return 0;
}
