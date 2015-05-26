//
//  main.c
//  20150526-1
//
//  Created by 欣 陈 on 15/5/26.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//有两个磁盘文件"A"和"B",各存放一行字母
//今要求把这两个文件中的信息合并（按字母顺序排列），输出到一个新文件"C"中去
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    int i,j,n,i1;
    char c[100],t,ch;
    if((fp = fopen("a1","r")) == NULL){
        printf("\ncan not open file\n");
        exit(0);
    }
    printf("file A:\n");
    for(i = 0;(ch = fgetc(fp)) != EOF;i++){
        c[i] = ch;
        putchar(c[i]);
    }
    fclose(fp);
    i1 = i;
    if((fp = fopen("b1","r")) == NULL){
        printf("\ncan not open file\n");
        exit(0);
    }
    printf("\nfile B:\n");
    for(i = i1;(ch = fgetc(fp)) != EOF;i++){
        c[i] = ch;
        putchar(c[i]);
    }
    fclose(fp);
    n = i;
    for(i = 0;i < n;i++)
        for(j = i+1;j < n;j++)
            if(c[i] > c[j]){
                t = c[i];
                c[i] = c[j];
                c[j] = t;
            }
    printf("\nfile C:\n");
    fp = fopen("c1","w");
    for(i = 0;i < n;i++){
        putc(c[i],fp);
        putchar(c[i]);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
