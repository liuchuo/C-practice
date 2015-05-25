//
//  main.c
//  20150525-5
//
//  Created by 欣 陈 on 15/5/25.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//从键盘输入10个学生的有关数据，然后把它们转存到磁盘文件上去
#include <stdio.h>
#define SIZE 10
struct Student_type{
    char name[10];
    int num;
    int age;
    char addr[15];
}stud[SIZE];

void save(){
    FILE *fp;
    int i;
    if((fp = fopen("/Users/chen/inflie","wb")) == NULL){
        printf("cannot open file\n");
        return;
    }
    for(i = 0;i < SIZE;i++){
        if(fwrite(&stud[i],sizeof(struct Student_type),1,fp) != 1)
            printf("file write error\n");
    }
    fclose(fp);
}

int main(){
    int i;
    printf("please enter data of students:\n");
    for(i = 0;i < SIZE;i++)
        scanf("%s%d%d%s",stud[i].name,&stud[i].num,&stud[i].age,stud[i].addr);
    save();
    return 0;
}
