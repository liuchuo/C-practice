//
//  main.c
//  20150525-4
//
//  Created by 欣 陈 on 15/5/25.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//编写以下程序，从文件中读回字符串，并在屏幕上显示
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char str[3][10];
    int i = 0;
    if((fp = fopen("/Users/chen/outfile","r")) == NULL){
        printf("can't open file!\n");
        exit(0);
    }
    while(fgets(str[i],10,fp) != NULL){
        printf("%s",str[i]);
        i++;
    }
    fclose(fp);
    return 0;
}
