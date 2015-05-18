//
//  main.c
//  20150518-41
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//一行电文，将密码译回原文
//第一种方法，用两个数组分别存放电文和译文
#include <stdio.h>
int main()
{
    int j,n;
    char ch[80],tran[80];
    printf("input cipher code:");
    gets(ch);
    printf("\ncipher code:%s",ch);
    j = 0;
    while(ch[j] != '\0')
    {
        if((ch[j] >= 'A') && (ch[j] <= 'Z'))
            tran[j] = 155 - ch[j];
        else if((ch[j] >= 'a') && (ch[j] <= 'z'))
            tran[j] = 219 -ch[j];
        else
            tran[j] = ch[j];
        j++;
    }
    n = j;
    printf("\noriginal text :");
    for(j = 0;j < n;j++)
        putchar(tran[j]);
    printf("\n");
    return 0;
}
