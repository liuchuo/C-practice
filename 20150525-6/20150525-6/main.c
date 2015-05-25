//
//  main.c
//  20150525-6
//
//  Created by 欣 陈 on 15/5/25.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//为了验证再磁盘文件中是否已经存在此数据，可以用一下程序从文件中读入数据，然后在屏幕上输出
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct Student_type{
    char name[10];
    int num;
    int age;
    char addr[15];
}stud[SIZE];

int main(){
    int i;
    FILE *fp;
    if((fp = fopen("/Users/chen/infile","rb")) == NULL){
        printf("cannot open file\n");
        exit(0);
    }
    for(i = 0;i < SIZE;i++){
        fread(&stud[i],sizeof(struct Student_type),1,fp);
        printf("%-10s%4d%4d%-10s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
    }
    fclose(fp);
    return 0;
}
