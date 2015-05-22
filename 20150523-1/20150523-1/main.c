//
//  main.c
//  20150523-1
//
//  Created by 欣 陈 on 15/5/23.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//输入一个字符串，内有数字和非数字字符。将其中连续的数字作为一个整数，依次存放到一数组a中。统计共有多少个整数，并输出这些数
#include <stdio.h>
int main(){
    char str[50],*pstr;
    int i,j,k,m,e10,digit,ndigit,a[10],*pa;
    printf("input a string:\n");
    gets(str);
    pstr = &str[0];
    pa = &a[0];
    ndigit = 0;
    i = 0;
    j = 0;
    
    
    while(*(pstr + i) != '\0'){
        
        
        if((*(pstr + i) >= '0') && (*(pstr + i) <= '9'))
            j++;
        
        else{
            
            if(j > 0){
                
                digit = *(pstr + i - 1) - 48;
                k = 1;
                
                while(k < j){
                    e10 = 1;
                    for(m = 1;m <= k;m++)
                        e10 = e10 * 10;
                    digit += (*(pstr+i-1-k)-48) * e10;
                    k++;
                }
                
                *pa = digit;
                ndigit++;
                pa++;
                j = 0;
                
            }
        }
        i++;
    }
    
    if(j > 0){
        digit = *(pstr + i -1) - 48;
        k = 1;
        while(k < j){
            e10 = 1;
            for(m = 1;m <= k;m++)
                e10 = e10 * 10;
            digit += (*(pstr + i - 1 - k) - 48) * e10;
            k++;
        }
        
        *pa = digit;
        ndigit++;
        j = 0;
    }
    
    
    printf("there are %d numbers in this line,they are:\n",ndigit);
    j = 0;
    pa = &a[0];
    for(j = 0;j < ndigit;j++)
        printf("%d ",*(pa+j));
    printf("\n");
    return 0;
}