//
//  main.c
//  20150519-3
//
//  Created by 欣 陈 on 15/5/19.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//用递归法讲一个整数n转换成字符串。
#include <stdio.h>
int main(){
    void convert(int n);
    int number;
    printf("input an integer:");
    scanf("%d",&number);
    printf("output:");
    if(number < 0){
        putchar('-');
        putchar(' ');
        number = -number;
    }
    convert(number);
    printf("\n");
    return 0;
}

void convert(int n){
    int i;
    if((i = n/10) != 0)
        convert(i);
    putchar(n % 10 + '0');
    putchar(32);
}//putchar(32)表示输出空格~~
