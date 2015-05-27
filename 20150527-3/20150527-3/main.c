//
//  main.c
//  20150527-3
//
//  Created by 欣 陈 on 15/5/27.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//2.读文件，按平均分排序，然后将已排序好的存入一个新文件
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct student{
    char num[10];
    char name[8];
    int score[3];
    float ave;
}stud[SIZE],work;

int main(){
    void sort(void);
    int i;
    FILE *fp;
    fp = fopen("stud.dat","rb");
    printf("sorted student's scores list as follow\n");
    printf("------------------------------------------------------\n");
    printf("NAME     NO.     SCORE1    SCORE2     SCORE3  AVE\n");
    printf("-------------------------------------------------------\n");
    for(i = 0;i < SIZE;i++){
        fread(&stud[i],sizeof(struct student),1,fp);
        printf("%-10s %10s %8d %8d %8d %10.2f",stud[i].num,stud[i].name,stud[i].score[0],
               stud[i].score[1],stud[i].score[2],stud[i].ave);
    }
    fclose(fp);
    return 0;
}

void sort(void){
    FILE *fp1,*fp2;
    int i,j;
    if((fp1 = fopen("stud.dat","rb")) == NULL){
        printf("The file cannot open\n");
        exit(0);
    }
    if((fp2 = fopen("stud_sort.dat","wb")) == NULL){
        printf("The file write error\n");
        exit(0);
    }
    for(i = 0;i < SIZE;i++)
        if(fread(&stud[i],sizeof(struct student),1,fp1) != 1){
            printf("file read error\n");
            exit(0);
        }
    for(i = 0;i < SIZE;i++)
        for(j = i+1;j < SIZE;j++){
            if(stud[i].ave > stud[i].ave){
                work = stud[i];
                stud[i] = stud[j];
                stud[j] = work;
            }
            fwrite(&stud[i],sizeof(struct student),1,fp2);
        }
    fclose(fp1);
    fclose(fp2);
}
