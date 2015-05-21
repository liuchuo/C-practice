//
//  main.c
//  20150521-1
//
//  Created by 欣 陈 on 15/5/21.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//将一个5x5的矩阵中最大的元素放在中心，4个角分别放4个最小的元素（顺序为从左到右，从上到下依次从小到大存放）
#include <stdio.h>
int main(){
    void change(int *p);
    int a[5][5];
    int *p,i,j;
    printf("input matrix:\n");
    for(i = 0;i < 5;i++)
        for(j = 0;j < 5;j++)
            scanf("%d",&a[i][j]);
    p = &a[0][0];
    change(p);
    for(i = 0;i < 5;i++){
        for(j = 0;j < 5;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}

void change(int *p){
    int i,j,temp;
    int *pmax,*pmin;
    pmax = p;
    pmin = p;
    for(i = 0;i < 5;i++) //找最大值和最小值的地址，并赋给pmax，pmin
        for(j = 0;j < 5;j++){
            if(*pmax < *(p + 5*i + j))
                pmax = p + 5*i + j;
            if(*pmin > * (p + 5*i + j))
                pmin = p + 5*i + j;
        }
    temp = *(p + 12);
    *(p + 12) = *pmax;
    *pmax = temp;
    temp = *p;
    *p = *pmin;
    *pmin = temp;
    
    pmin = p + 1;
    for(i = 0;i < 5;i++)
        for(j = 0;j < 5;j++)
            if(((p + 5*i + j) != p) && (*pmin > *(p + 5*i + j)))
                pmin = p + 5*i + j;
    temp = *pmin;
    *pmin = *(p + 4);
    *(p + 4) = temp;
    
    pmin = p + 1;
    for(i = 0;i < 5;i++)
        for(j = 0;j < 5;j++)
            if(((p + 5*i + j) != p) && ((p + 5*i + j) != (p + 4)) &&
               (*pmin > *(p + 5*i + j)))
                pmin = p + 5*i + j;
    temp = *pmin;
    *pmin = *(p + 20);
    *(p + 20) = temp;
    
    pmin = p + 1;
    for(i = 0;i < 5;i++)
        for(j = 0;j < 5;j++)
            if(((p + 5*i + j) != p) && ((p + 5*i + j) != (p + 4)) &&
                ((p + 5*i + j) != (p + 20)) && (*pmin > *(p + 5*i + j)))
                pmin = p + 5*i + j;
    temp = *pmin;
    *pmin = *(p + 24);
    *(p + 24) = temp;
}