//
//  main.c
//  20150525-10
//
//  Created by 欣 陈 on 15/5/25.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//从键盘输入一个字符串，将其中的小写字母全部转换成大写字母，然后输出到一个磁盘文件test中保存，输入的字符串以『！』结束
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fp;
    char str[100];
    int i = 0;
    if((fp = fopen("file","w")) == NULL){
        printf("can not open file\n");
        exit(0);
    }
    printf("input a string :\n");
    gets(str);
    while (str[i] != '!'){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        fputc(str[i],fp);
        i++;
    }
    fclose(fp);
    fp = fopen("file","r");
    fgets(str,strlen(str)+1,fp);
    printf("%s\n",str);
    fclose(fp);
    return 0;
}
