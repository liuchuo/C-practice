//
//  main.c
//  20150527-9
//
//  Created by 欣 陈 on 15/5/27.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//定义一些宏,代表不同的输出格式
#include <stdio.h>
#define PR printf
#define NL "\n"
#define D "%d"
#define D1 D NL
#define D2 D D NL
#define D3 D D D NL
#define D4 D D D D NL
#define S "%s"
int main(){
    int a,b,c,d;
    char string[] = "CHINA";
    a = 1;
    b = 2;
    c = 3;
    d = 4;
    PR(D1,a);
    PR(D2,a,b);
    PR(D3,a,b,c);
    PR(D4,a,b,c,d);
    PR(S,string);
    return 0;
}
