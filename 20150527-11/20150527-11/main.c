//
//  main.c
//  20150527-11
//
//  Created by 欣 陈 on 15/5/27.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输出一行字母字符，根据需要设置条件编译，使之根据需要设置条件编译，
//使之能将字母全改为大写输出，或全改为小写字母输出
#include <stdio.h>
//#define LETTER 1
int main(){
    char c;
    char str[20] = "C Language";
    int i = 0;
    while((c = str[i]) != '\0'){
# if LETTER
        if(c >= 'a' && c <= 'z')
            c = c - 32;
# else
        if(c >= 'A' && c <= 'Z')
            c = c + 32;
#endif
        printf("%c",c);
        i++;
    }
    printf("\n");
    return 0;
}
