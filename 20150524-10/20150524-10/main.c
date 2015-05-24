//
//  main.c
//  20150524-10
//
//  Created by 欣 陈 on 15/5/24.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//


//有10个学生，每个学生的数据包括学号、姓名、3门课程的成绩，从键盘输入10个学生的数据
//要求输出3门课程总平均成绩，以及最高分的学生的数据（包括学号、姓名、3门课程成绩、平均分数）
#include <stdio.h>
#define N 10
struct student{
    char num[6];
    char name[8];
    float score[3];
    float aver;
}stu[N];
int main(){
    int i,j,maxi;
    float sum,average;
    float max;
    for(i = 0;i < N;i++){
        printf("input the scores of students %d:\n",i+1);
        printf("NO.:");
        scanf("%s",stu[i].num);
        printf("name:");
        scanf("%s",stu[i].name);
        for(j = 0;j < 3;j++){
            printf("score %d:",j+1);
            scanf("%f",&stu[i].score[j]);
        }
        printf("\n");
    }
    average = 0;
    max = 0;
    maxi = 0;
    for(i = 0;i < N;i++){
        sum = 0;
        for(j = 0;j < 3;j++){
            sum += stu[i].score[j];
        }
        stu[i].aver = sum / 3;
        average += stu[i].aver;
        if(sum > max){
            max = sum;
            maxi = i;
        }
    }
    average = average / N;
    printf("NO.    name    score1    score2    score3    average\n");
    for(i = 0;i < N;i++){
        printf("%s   %s  ",stu[i].num,stu[i].name);
        for(j = 0;j < N;j++){
            printf("%f   ",stu[i].score[j]);
        }
        printf("%f",stu[i].aver);
        printf("\n");
    }
    printf("the highest score is:student ");
    printf("%s,%s\n",stu[maxi].num,stu[maxi].name);
    printf("his score are:%f,%f,%f,average:%f\n",stu[maxi].score[0],
           stu[maxi].score[1],stu[maxi].score[2],stu[maxi].aver);
    return 0;
}