//
//  main.c
//  20150518-54
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//编一个函数，由实参传来一个字符串。统计该字符串中的字母、数字、空格和其他字符的个数
//在主函数里输入字符串以及输出上述结果
#include <stdio.h>
int letter,digit,space,others;
int main()
{
    void count(char []);
    char text[80];
    printf("input text:\n");
    gets(text);
    printf("string:\t");
    puts(text);
    letter = digit = space = others = 0;
    count(text);
    printf("letter:%d\n digit:%d\n space:%d\n others:%d\n",letter,digit,space,others);
    return 0;
}

void count(char str[])
{
    int i;
    for(i = 0;str[i] != '\0';i++)
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            letter++;
        else if(str[i] >= '0' && str[i] <= '9')
            digit++;
        else if(str[i] == ' ')
            space++;
        else others++;
}
