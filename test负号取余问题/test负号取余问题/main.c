//
//  main.c
//  test负号取余问题
//
//  Created by 欣 陈 on 15/9/16.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

#include <stdio.h>
int main(){
    int a = -5,b = 3;
    printf("%d",a%b);
    return 0;
}
//如果是按照先省略负号然后取余然后加上负号的方法，结果就是-2
//如果是按照结果是3 * -2，然后取余结果就是-1
