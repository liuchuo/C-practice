//
//  main.c
//  20150518-52
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//写一个函数，将一个字符串中的元音字母复制到另一个字符串。然后输出
#include <stdio.h>
int main()
{
    void copy(char [],char []);
    char str1[80],str2[80];
    printf("input string:\n");
    scanf("%s",str1);
    copy(str1,str2);
    printf("the vowel leters are:%s",str2);
    return 0;
}

void copy(char str1[],char str2[])
{
    int i,j;
    for(i = 0,j = 0;str1[i] != '\0';i++)
        if(str1[i] == 'a' || str1[i] == 'e' ||
           str1[i] == 'i' || str1[i] =='o' ||
           str1[i] == 'u' || str1[i] == 'A' ||
           str1[i] == 'E' || str1[i] == 'I' ||
           str1[i] == 'O' || str1[i] == 'U')
        {
            str2[j] = str1[i];
            j++;
        }
    str2[j]='\0';
}
