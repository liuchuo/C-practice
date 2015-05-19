//
//  main.c
//  20150520-2
//
//  Created by 欣 陈 on 15/5/20.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输入10个整数，将其中的最小的数与第一个数对换，
//把最大的数与最后一个数对换
#include <stdio.h>
int main(){
    void input(int *);
    void max_min_value(int *);
    void output(int *);
    int number[10];
    input(number);
    max_min_value(number);
    output(number);
    return 0;
}

void input(int *number){
    int i;
    printf("input 10 numbers:");
    for(i = 0;i < 10;i++){
        scanf("%d",&number[i]);
    }
}

void max_min_value(int *number){
    int *max,*min,*p,temp;
    max = min = number;//使max和min都指向第一个数
    for(p = number + 1;p < number + 10;p++){
        if(*p > *max)
            max = p;
        else if(*p < *min)
            min = p;
    }
    temp = number[0];
    number[0] = *min;
    *min = temp;
    if(max == number)
        max = min;
    temp = number[9];
    number[9] = *max;
    *max = temp;
}

void output(int *number){
    int *p;
    printf("Now,they are:  ");
    for(p = number;p < number + 10;p++){
        printf("%d ",*p);
    }
    printf("\n");
}
