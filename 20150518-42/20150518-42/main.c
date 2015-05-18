//
//  main.c
//  20150518-42
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//上一题，只用一个字符数组存放数据
#include <stdio.h>
int main()
{
    int j,n;
    char ch[80];
    printf("input cipher code:");
    gets(ch);
    printf("\ncipher code:%s",ch);
    j = 0;
    while(ch[j] != '\0')
    {
        if((ch[j] >= 'A') && (ch[j] <= 'Z'))
            ch[j] = 155 - ch[j];
        else if((ch[j] >= 'a') && (ch[j] <= 'z'))
            ch[j] = 219 - ch[j];
        else
            ch[j] = ch[j];
        j++;
    }
    n = j;
    printf("\noriginal text :");
    for(j = 0;j < n;j++)
        putchar(ch[j]);
    printf("\n");
    return 0;
}
