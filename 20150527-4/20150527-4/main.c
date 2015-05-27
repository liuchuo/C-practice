//
//  main.c
//  20150527-4
//
//  Created by 欣 陈 on 15/5/27.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//插入一个学生的3门课程成绩，按成绩高低顺序插入，插入后建立一个新文件
#include <stdio.h>
#include <stdlib.h>
struct student{
    char num[10];
    char name[8];
    int score[3];
    float ave;
}st[10],s;

int main(){
    FILE *fp,*fp1;
    int i,j,t,n;
    printf("\nNO.:");
    scanf("%s",s.num);
    printf("name:");
    scanf("%s",s.name);
    printf("score1,score2,score3:");
    scanf("%d,%d,%d",&s.score[0],&s.score[1],&s.score[2]);
    s.ave = (s.score[0] + s.score[1] + s.score[2]) / 3.0;
    
    //read from file
    if((fp = fopen("stu_sort","r")) == NULL){
        printf("can not open the file.\n");
        exit(0);
    }
    printf("original data:\n");
    for(i = 0;fread(&st[i],sizeof(struct student),1,fp) != 0;i++){
        printf("\n%8s%8s",st[i].num,st[i].name);
        for(j = 0;j < 3;j++){
            printf("%8d",st[i].score[j]);
        }
        printf("%10.2f",st[i].ave);
    }
    n = i;
    for(t = 0;st[t].ave > s.ave && t < n;t++);
    
    //write data to file
    printf("\nNow:\n");
    fp1 = fopen("sort1.dat","w");
    for(i = 0;i < t;i++){
        fwrite(&st[i],sizeof(struct student),1,fp);
        printf("\n%8s %8s",st[i].num,st[i].name);
        for(j = 0;j < 3;j++){
            printf("%8d",st[i].score[j]);
        }
        printf("%10.2f",st[i].ave);
    }
    
    fwrite(&s,sizeof(struct student),1,fp1);
    printf("\n%8s %7s %7d %7d %7d %10.2f",s.num,s.name,
           s.score[0],s.score[1],s.score[2],s.ave);
    
    for(i = t;i < n;i++){
        fwrite(&st[i],sizeof(struct student),1,fp1);
        printf("\n%8s %8s",st[i].num,st[i].name);
        for(j = 0;j < 3;j++){
            printf("%8d",st[i].score[j]);
        }
        printf("%10.2f",st[i].ave);
    }
    printf("\n");
    fclose(fp);
    fclose(fp1);
    return 0;
}
