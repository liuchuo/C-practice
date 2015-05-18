//
//  main.c
//  20150518-55
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输入一行字符，输出其中最长的单词
#include <stdio.h>
#include <string.h>
int main()
{
    int alphabetic(char);
    int longest(char []);
    int i;
    char line[100];
    printf("input one line:\n");
    gets(line);
    printf("The longest word is:\n");
    for(i = longest(line);alphabetic(line[i]);i++)
        printf("%c",line[i]);
    return 0;
}

int alphabetic(char c)
{
    if((c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z'))
        return(1);
    else
        return(0);
}

int longest(char string[])
{
    int len = 0,length = 0,i,flag = 1,place = 0,point;
    for(i = 0;i <= strlen(string);i++)
    {
        if(alphabetic(string[i]))
            if(flag)
            {
                point = i;
                flag = 0;
            }
            else
                len++;
            else
            {
                flag = 1;
                if(len >= length)
                {
                    length = len;
                    place = point;
                    len = 0;
                }
            }
    }
    return(place);
}
