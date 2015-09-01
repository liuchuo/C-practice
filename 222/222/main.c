//
//  main.c
//  222
//
//  Created by 欣 陈 on 15/7/8.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void delchar(char *str,char del){
    
    printf("%c", str[0]);
    
    char *p = str;
    
    printf("%lu", sizeof(*str));
    
    while(*str != '\0'){
        
        if(*str != del){
            *p++ = *str;
        }
        ++str;
    }
    *p = '\0';
}

int main(){
    char s[30],del;
    printf("...");
    gets(s);
    printf("....");
    del = getchar();
    delchar(s,del);
    printf("%s\n",s);
    return 0;
}
