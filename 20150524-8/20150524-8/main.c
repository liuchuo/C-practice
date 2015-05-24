//
//  main.c
//  20150524-8
//
//  Created by 欣 陈 on 15/5/24.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//编写一个函数print，输出一个学生的成绩数组，该数组中有5个学生的数据记录
//每个记录包括num,mame,score[3],用主函数输入这些记录，用print函数输出这些记录
#include <stdio.h>
#define N 5
struct student{
    char num[6];
    char name[8];
    int score[4];
}stu[N];
int main(){
    void print(struct student stu[6]);
    int i,j;
    for(i = 0;i < N;i++){
        printf("input score of student %d:\n",i+1);
        printf("NO.:");
        scanf("%s",stu[i].num);
        printf("name:");
        scanf("%s",stu[i].name);
        for(j = 0;j < 3;j++){
            printf("score %d:",j+1);
            scanf("%d",&stu[i].score[j]);
        }
        printf("\n");
    }
    print(stu);
    return 0;
}

void print(struct student stu[6]){
    int i,j;
    printf("\nNO. name score1 score2 score3\n");
    for(i = 0;i < N;i++){
        printf("%s %s",stu[i].num,stu[i].name);
        for(j = 0;j < 3;j++)
            printf("%9d",stu[i].score[j]);
        printf("\n");
    }
}
