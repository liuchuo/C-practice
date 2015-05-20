//
//  main.c
//  20150520-8
//
//  Created by 欣 陈 on 15/5/20.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//写一个函数，将一个3x3的整型矩阵转置。
#include <stdio.h>
int main(){
    void move1(int *);
    int a[3][3];
    int *p;
    int i;
    printf("input matrix:\n");
    for(i = 0;i < 3;i++)
        scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
    p = &a[0][0];
    move1(p);
    printf("now,matrix:\n");
    for(i = 0;i < 3;i++)
        printf("%d %d %d\n",a[i][0],a[i][1],a[i][2]);
    return 0;
}

void move1(int *pointer){
    int i,j,t;
    for(i = 0;i < 3;i++){
        t = *(pointer + 3 * i + j);
        *(pointer + 3 * i + j) = *(pointer + 3 * j + i);
        *(pointer + 3 * j + i) = t;
    }
}
