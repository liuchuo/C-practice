//
//  main.c
//  20150525-2
//
//  Created by 欣 陈 on 15/5/25.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//将一个磁盘文件中的信息复制到另一个磁盘文件中
//今要求将上例建立的file.dat文件中的内容复制到另一个磁盘文件file2.dat中
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *in,*out;
    char ch,infile[10],outfile[10];
    printf("输入读入文件的名字：");
    scanf("%s",infile);
    printf("输入输出文件的名字：");
    scanf("%s",outfile);
    if((in = fopen("/Users/chen/infile","r")) == NULL){
        printf("无法打开此文件1\n");
        exit(0);
    }
    if((out = fopen("/Users/chen/outfile","w")) == NULL){
        printf("无法打开此文件2\n");
        exit(0);
    }
    while(!feof(in)){
        ch = fgetc(in);
        fputc(ch,out);
        putchar(ch);
    }
    putchar(10);
    fclose(in);
    fclose(out);
    return 0;
}