//
//  main.c
//  20150518-15
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//统计输入字符其中的英文字母、空格、数字和其他字符的个数
#include <stdio.h>
int main()
{
    char c;
    int letter = 0,space = 0,digit = 0,other = 0;
    printf("请输入一行字符：\n");
    while((c = getchar()) != '\n')//在输入回车前一直getchar
    {
        if((c>='A' && c<='Z') || c>='a' && c<='z')
            letter++;
        else if(c == ' ')
            space++;
        else if(c>='0' && c<='9')
            digit++;
        else other++;
    }
    printf("字母数为%d,空格数为%d，数字数为%d，其他数为%d",letter,space,digit,other);
    return 0;
}//因为!=的优先级高于c = getchar()的优先级，所以一定要给(c = getchar())加括号~~~((c = getchar())!='\n')~~~~~~~~
