//
//  main.c
//  process
//
//  Created by 欣 陈 on 15/5/22.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//


/*3.设一个函数，调用它时，每次实现不同的功能：
①求两个数的和。
②求两个数的差。
③求两个数的积。
要求：
·在主函数中输入2个数，a,b,并输出a,b的和、差及乘积。
·分别编写函数add(),sub(),mul()计算两个数的和、差、积。
·编写函数process(),分别调用add(),sub(),mul()。*/

#include <stdio.h>
void process(int,int);
int add(int,int);
int sub(int,int);
int mul(int,int);

int main(){
    int a,b;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    process(a,b);
    return 0;
}

void process(int a,int b) {
    printf("a + b = %d\n",add(a,b));
    printf("a - b = %d\n",sub(a,b));
    printf("a * b = %d\n",mul(a,b));
}

int add(int a,int b) {
    return a + b;
}

int sub(int a,int b) {
    return a - b;
}

int mul(int a,int b) {
    return a * b;
}
