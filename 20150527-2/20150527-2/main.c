//
//  main.c
//  20150527-2
//
//  Created by 欣 陈 on 15/5/27.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//读文件，按平均分排序，然后将已排序好的存入一个新文件
#include <stdio.h>
#include <stdlib.h>
#define N 10
struct student{
    char num[10];
    char name[8];
    int score[3];
    float ave;
}st[N],temp;

int main(){
    FILE *fp;
    int i,j,n;
    
    //read file
    if((fp = fopen("stud","r")) == NULL){
        printf("can not open file.\n");
        exit(0);
    }
    printf("File 'stud':");
    for(i = 0;fread(&st[i],sizeof(struct student),1,fp) != 0;i++){
        printf("%8s  %8s",st[i].num,st[i].name);
        for(j = 0;j < 3;j++){
            printf("%8d",st[i].score[j]);
        }
        printf("%10.2f",st[i].ave);
    }
    printf("\n");
    fclose(fp);
    n = i;
    //sort
    for(i = 0;i < n;i++)
        for(j = i+1;i < n;j++){
            if(st[i].ave > st[j].ave){
                temp = st[i];
                st[i] = st[j];
                st[j] = temp;
            }
        }
    //print
    printf("Now:\n");
    fp = fopen("stu.dat","rb");
    for(i = 0;i < n;i++){
        fwrite(&st[i],sizeof(struct student),1,fp);
        printf("\n%8s %8s",st[i].num,st[i].name);
        for(j = 0;j < n;j++){
            printf("%8d",st[i].score[j]);
        }
        printf("%10.2f",st[i].ave);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
