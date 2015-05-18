//
//  main.c
//  20150518-59
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输入10个学生5门课程的成绩，计算每个学生的平均分，每门课的平均分
//找出所有50个分数中最高的分数以及所对应的学生和课程
//计算平均分方差
#include <stdio.h>
#define N 10
#define M 5
float score[N][M];
float a_stu[N],a_cour[M];
int r,c;
int main()
{
    int i,j;
    float h;
    float s_var(void);
    float highest();
    void input_stu(void);
    void aver_stu(void);
    void aver_stu(void);
    void aver_cour(void);
    input_stu();
    aver_stu();
    aver_cour();
    printf("\n NO.		cour1	cour2	cour3	cour4	cour5	aver\n");
    for(i = 0;i < N;i++)
    {
        printf("\n NO %2d",i+1);
        for(j = 0;j < M;j++)
            printf("%8.2f",score[i][j]);
        printf("%8.2f\n",a_stu[i]);
    }
    printf("\naverage:");
    for(j = 0;j < M;j++)
        printf("%8.2f\n",a_cour[j]);
    printf("\n");
    h = highest();
    printf("highest:%7.2f	NO. %2d		course %2d\n",h,r,c);
    printf("variance %8.2f\n",s_var());
    return 0;
}

void input_stu(void)
{
    int i,j;
    for(i = 0;i < N;i++)
    {
        printf("\ninput score of student%2d:\n",i+1);
        for(j = 0;j < M;j++)
            scanf("%f",&score[i][j]);
    }
}

void aver_stu(void)
{
    int i;
    int j;
    float s;
    for(i = 0;i < N;i++)
    {
        for(j = 0,s = 0;j < M;j++)
            s += score[i][j];
        a_stu[i] = s/5.0;
    }
    
}

void aver_cour(void)
{
    int i,j;
    float s;
    for(j = 0;j < M;j++)
    {
        s = 0;
        for(i = 0;i < N;i++)
            s += score[i][j];
        a_cour[j] = s/(float)N;
    }
}

float highest()
{
    float high;
    int i,j;
    high = score[0][0];
    for(i = 0;i < N;i++)
        for(j = 0;j < M;j++)
            if(score[i][j] > high)
            {
                high = score[i][j];
                r = i + 1;
                c = j + 1;
            }
    return(high);
}

float s_var(void)
{
    int i;
    float sumx,sumxn;
    sumx = 0.0;
    sumxn = 0.0;
    for(i = 0;i < N;i++)
    {
        sumx += a_stu[i]*a_stu[i];
        sumxn +=a_stu[i];
    }
    return(sumx/N - (sumxn/N)*(sumxn/N));
}
