//
//  main.c
//  20150527-7
//
//  Created by 欣 陈 on 15/5/27.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//从键盘输入若干行字符，每行字符长度不等，输入后把它们存储到一磁盘文件中。
//再从该文件中读入这些数据，将其中小写字母转换成大写字母后再显示屏上输出
#include <stdio.h>
int main(){
    int i,flag;
    char str[80],c;
    FILE *fp;
    fp = fopen("text","w");
    flag = 1;
    while(flag == 1){
        printf("input string:\n");
        gets(str);
        fprintf(fp,"%s",str);
        printf("continue?");
        c = getchar();
        if((c == 'N') || (c == 'n'))
            flag = 0;
        getchar();
    }
    fclose(fp);
    fp = fopen("text","r");
    while(fscanf(fp,"%s",str) != EOF){
        for(i = 0;str[i] != '\0';i++){
            if((str[i] > 'a') && (str[i] < 'z')){
                str[i] -= 32;
            }
        }
        printf("%s\n",str);
    }
    fclose(fp);
    return 0;
}