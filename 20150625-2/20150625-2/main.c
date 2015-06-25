//
//  main.c
//  20150625-2
//
//  Created by 欣 陈 on 15/6/25.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

#include <stdio.h>
void fun(int k){
    printf("~~~~~~~.当前第%d层,地址为%p\n",k,&k);
    if(k < 5)
        fun(k+1);
    printf("||||||||当前第%d层,地址为%p\n",k,&k);
}

int main(){
    fun(1);
    return 0;
}
