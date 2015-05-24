//
//  main.c
//  20150524-2
//
//  Created by 欣 陈 on 15/5/24.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//用指向指针的指针的方法对5个字符串排序并输出
#include <stdio.h>
#include <string.h>
#define LINEMAX 20
int main(){
    void sort(char **p);
    int i;
    char str[5][LINEMAX];
    char *pstr[5];
    char **p;
    for(i = 0;i < 5;i++)
        pstr[i] = str[i];
    printf("input 5 strings:\n");
    for(i = 0;i < 5;i++)
        scanf("%s",pstr[i]);
    p = pstr;
    sort(p);
    printf("\nstrings sorted:\n");
    for(i = 0;i < 5;i++)
        printf("%s\t",pstr[i]);
    return 0;
}

void sort(char **p){
    int i,j;
    char *temp;
    for(i = 0;i < 5;i++){
        for(j = i+1;j < 5;j++){
            if(strcmp(*(p+i),*(p+j)) > 0){
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }
}
