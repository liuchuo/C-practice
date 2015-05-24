//
//  main.c
//  20150524-3
//
//  Created by 欣 陈 on 15/5/24.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//用指向指针的指针的方法对n个整数排序并输出，要求将排序单独写成一个函数。
//n个整数在主函数中输入，最后在主函数中输出
#include <stdio.h>
int main(){
    void sort(int **p,int n);
    int i,n;
    int data[20],*pstr[20],**p;
    printf("input n:\n");
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        pstr[i] = &data[i];
    printf("input %d integer numbers:",n);
    for(i = 0;i < n;i++)
        scanf("%d",pstr[i]);
    p = pstr;
    sort(p,n);
    printf("Now,the sequence is:\n");
    for(i = 0;i < n;i++)
        printf("%d  ",*pstr[i]);
    printf("\n");
    return 0;
}

void sort(int **p,int n){
    int i,j;
    int *temp;
    for(i = 0;i < n;i++){
        for(j = i+1;j < n;j++){
            if(**(p+i) > **(p+j)){
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }
}
