//
//  main.c
//  20150527-6
//
//  Created by 欣 陈 on 15/5/27.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//从"职工工资文件"中删去一个职工的数据，再存回原文件
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee{
    char name[10];
    int salary;
}emp[20];

int main(){
    FILE *fp;
    int i,j,n,flag;
    char name[10];
    if((fp = fopen("emp_salary","rb")) == NULL){
        printf("can not open file.\n");
        exit(0);
    }
    printf("\noriginal data:\n");
    for(i = 0;fread(&emp[i],sizeof(struct employee),1,fp) != 0;i++)
        printf("\n %8s %7d",emp[i].name,emp[i].salary);
    fclose(fp);
    n = i;
    printf("\ninput name deleted:\n");
    scanf("%s",name);
    for(flag = 1,i = 0;flag && i < n;i++){
        if(strcmp(name,emp[i].name) == 0){
            for(j = i;j < n-1;j++){
                strcpy(emp[j].name,emp[j+1].name);
                emp[j].salary = emp[j+1].salary;
            }
            flag = 0;
        }
    }
    if(!flag)
        n = n-1;
    else
        printf("\n not found!");
    printf("\n Now,The content of file:\n");
    if((fp = fopen("emp_salary","wb")) == NULL){
        printf("can not open file\n");
        exit(0);
    }
    for(i = 0;i < n;i++){
        fwrite(&emp[i],sizeof(struct employee),1,fp);
    }
    fclose(fp);
    fp = fopen("em_salary","r");
    for(i = 0;fread(&emp[i],sizeof(struct employee),1,fp) != 0;i++){
        printf("\n%8s %7d",emp[i].name,emp[i].salary);
    }
    printf("\n");
    fclose(fp);
    return 0;
}
