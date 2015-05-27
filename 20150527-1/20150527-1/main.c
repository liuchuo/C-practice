//
//  main.c
//  20150527-1
//
//  Created by 欣 陈 on 15/5/27.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//调用save函数，向文件输出数据，用制度方式打开文件，从文件读入数据并在屏幕上输出
#include <stdio.h>
#define SIZE 5
struct student{
    char name[10];
    int num;
    int score[3];
    float ave;
}stud[SIZE];

int main(){
    void save(void);
    int i;
    float sum[SIZE];
    FILE *fp1;
    for(i = 0;i < SIZE;i++){
        scanf("%s %d %d %d %d",stud[i].name,&stud[i].num,
              &stud[i].score[0],&stud[i].score[1],&stud[i].score[2]);
        sum[i] = stud[i].score[0] + stud[i].score[1] + stud[i].score[2];
        stud[i].ave = sum[i] / 3;
    }
    save();
    fp1 = fopen("stu.dat","rb");
    printf("\n name  NO.  score1  score2  score3  ave\n");
    printf("-------------------------------------------\n");
    for(i = 0;i < SIZE;i++){
        fread(&stud[i],sizeof(struct student),1,fp1);
        printf("%-10s %3d %7d %7d %7d %8.2f\n",stud[i].name,stud[i].num,
               stud[i].score[0],stud[i].score[1],stud[i].score[2],stud[i].ave);
    }
    fclose(fp1);
    return 0;
}

void save(void){
    FILE *fp;
    int i;
    if((fp = fopen("stu.dat","wb")) == NULL){
        printf("The file can not ipen\n");
        return;
    }
    for(i = 0;i < SIZE;i++)
        if(fwrite(&stud[i],sizeof(struct student),1,fp) != 1){
            printf("file write error\n");
            return;
        }
    fclose(fp);
}
