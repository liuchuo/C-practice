//
//  main.c
//  20150525-9
//
//  Created by 欣 陈 on 15/5/25.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//在磁盘文件上存有10个学生的数据，要求将第1，3，5，7，9个学生的数据区的开头，
//从磁盘文件读入相应学生的信息，并把它显示在屏幕上
#include <stdio.h>
#include <stdlib.h>
struct student_type{
    char name[10];
    int num;
    int age;
    char addr[15];
}stud[10];

int main(){
    int i;
    FILE *fp;
    if((fp = fopen("file","rb")) == NULL){
        printf("can not open file\n");
        exit(0);
    }
    for(i = 0;i < 10;i += 2){
        fseek(fp,i * sizeof(struct student_type),0);
        fread(&stud[i],sizeof(struct student_type),1,fp);
        printf("%-10s %4d %4d %-15s\n",stud[i].name,stud[i].num,stud[i].age,stud[i].addr);
    }
    fclose(fp);
    return 0;
}
