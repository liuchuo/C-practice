//
//  main.c
//  20150520-4
//
//  Created by 欣 陈 on 15/5/20.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//有n个整数，使前面各数顺序向后移m个位置，最后m个数变成最前面m个数
#include <stdio.h>
int main(){
    void move1(int [20],int,int);
    int number[20],n,m,i;
    printf("How many numbers?");
    scanf("%d",&n);
    printf("input %d numbers:\n",n);
    for(i = 0;i < n;i++){
        scanf("%d",&number[i]);
    }
    printf("how many place do you want move?");
    scanf("%d",&m);
    move1(number,n,m);
    printf("Now,they are:\n");
    for(i = 0;i < n;i++){
        printf("%d ",number[i]);
    }
    return 0;
}

void move1(int array[20],int n,int m){
    int *p;
    int array_end;
    array_end = *(array + n - 1);
    for(p = array + n - 1;p > array;p--){
        *p = *(p-1);
    }
        *array = array_end;
        m--;
        if(m > 0)
            move1(array,n,m);
}