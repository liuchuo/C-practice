//
//  main.c
//  20150518-39
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//统计文章中的英文大小写字母数字空格以其他字符的个数
#include <stdio.h>
int main()
{
    int i,j,upp,low,dig,spa,oth;
    char text[3][80];
    upp = low = dig = spa = oth = 0;
    for(i = 0;i < 3;i++)
    {
        printf("please input line %d:\n",i + 1);
        gets(text[i]);
        for(j = 0;j < 80 && text[i][j] != '\0';j++)
        {
            if(text[i][j] >= 'A' && text[i][j] <= 'Z')
                upp++;
            else if(text[i][j] >= 'a' && text[i][j] <= 'z')
                low++;
            else if(text[i][j] >= '0' && text[i][j] <= '9')
                dig++;
            else if(text[i][j] == ' ')
                spa++;
            else oth++;
        }
    }
    printf("\nupper case:%d",upp);
    printf("\nlower case:%d",low);
    printf("\ndigit : %d",dig);
    printf("\nspace : %d",spa);
    printf("\nother : %d\n",oth);
    return 0;
}
