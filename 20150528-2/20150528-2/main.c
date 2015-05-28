//
//  main.c
//  20150528-2
//
//  Created by 欣 陈 on 15/5/28.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//将a进行有循环移位
#include <stdio.h>
int main(){
    unsigned a,b,c;
    int n;
    printf("please enter a & n:\n");
    scanf("a=%o,n=%d",&a,&n);
    b = a<<(16-n);
    c = a>>n;
    c = c|b;
    printf("a:%o\nc:%o\n",a,c);
    return 0;
}
