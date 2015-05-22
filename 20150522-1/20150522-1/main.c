//
//  main.c
//  20150522-1
//
//  Created by 欣 陈 on 15/5/22.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//有一个班4个学生，5门课程。①求第1门课程的平均分；②找出有两门以上课程不及格的学生
//输出他们的学号和全部课程成绩及平均成绩；③找出平均成绩再90分以上或全部课程成绩再85分以上的学生
//分别编3个函数实现以上3个要求
#include <stdio.h>
int main(){
    void avsco(float *,float *);
    void avcour1(char (*pcourse)[10],float *pscore);
    void fali2(char course[5][10],int num[4],float *pscore,float aver[4]);
    void good(char course[5][10],int num[4],float *pscore,float aver[4]);
    int i,j;
    char (*pcourse)[10],course[5][10];
    int *pnum,num[4];
    float *pscore,*paver;
    float score[4][5],aver[4];
    printf("input course:\n");
    pcourse = course;
    for(i = 0;i < 5;i++){
        scanf("%s",course[i]);
    }
    printf("input NO. and scores:\n");
    printf("NO.");
    for(i = 0;i < 5;i++){
        printf(",%s",course[i]);
    }
    printf("\n");
    pscore = &score[0][0];
    pnum = &num[0];
    for(i = 0;i < 4;i++){
        scanf("%d",pnum + i);
        for(j = 0;j < 5;j++)
            scanf("%f",pscore + 5*i + j);
    }
    paver = &aver[0];
    printf("\n\n");
    avsco(pscore,paver);
    avcour1(pcourse,pscore);
    printf("\n\n");
    fali2(pcourse,pnum,pscore,paver);
    printf("\n\n");
    good(pcourse,pnum,pscore,paver);
    return 0;
}

void avsco(float *pscore,float *paver){
    int i,j;
    float sum,average;
    for(i = 0;i < 4;i++){
        sum = 0.0;
        for(j = 0;j < 5;j++)
            sum += *(pscore + 5*i + j);
        average = sum / 5;
        *(paver + i) = average;
    }
}

void avcour1(char (*pcourse)[10],float *pscore){
    int i;
    float sum,average1;
    sum = 0.0;
    for(i = 0;i < 4;i++)
        sum += *(pscore + 5*i);
    average1 = sum / 4;
    printf("course 1:%s average score:%7.2f\n",*pcourse,average1);
}

void fali2(char course[5][10],int num[4],float *pscore,float aver[4]){
    int i,j,k,label;
    printf("=====Student who is fail in two courses===== \n");
    printf("NO.");
    for(i = 0;i < 5;i++)
        printf("%s ",course[i]);
    printf("  average\n");
    for(i = 0;i < 4;i++){
        label = 0;
        for(j = 0;j < 5;j++)
            if(*(pscore + 5*i + j) < 60.0)
                label++;
        if(label >= 2){
            printf("%d ",num[i]);
            for(k = 0;k < 5;k++)
                printf("%f ",*(pscore + 5*i +k));
            printf("%f\n",aver[i]);
        }
    }
}

void good(char course[5][10],int num[4],float *pscore,float aver[4]){
    int i,j,k,n;
    printf("=====Students whose score is good=====\n");
    printf("NO.");
    for(i = 0;i < 5;i++)
        printf("%s ",course[i]);
    printf("  average\n");
    for(i = 0;i < 4;i++){
        n = 0;
        for(j = 0;j < 5;j++){
            if(*(pscore + 5*i + j) > 85.0)
                n++;
        }
        if(n == 5 || (aver[i] >= 90)){
            printf("%d ",num[i]);
            for(k = 0;k < 5;k++)
                printf("%f ",*(pscore + 5*i + k));
            printf("%f\n",aver[i]);
        }
    }
}

