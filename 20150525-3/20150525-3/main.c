//
//  main.c
//  20150525-3
//
//  Created by 欣 陈 on 15/5/25.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//从键盘读入若干个字符串，对它们按字母大小的顺序排序，然后把排好序的字符串送到磁盘文件中保存。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char str[3][10],temp[10];
    int i,j,k;
    int n = 3;
    printf("Enter strings:\n");
    for(i = 0;i < n;i++)
        gets(str[i]);
    
    for(i = 0;i < n-1;i++){
        k = i;
        for(j = i+1;j < n;j++){
            if(strcmp(str[k],str[j]) > 0)
                k = j;
        }
        if(k != i){
            strcpy(temp,str[i]);
            strcpy(str[i],str[k]);
            strcpy(str[k],temp);
        }
    }
    
    if((fp = fopen("Users\\chen\\file","w")) == NULL){
        printf("can't open file!\n");
        exit(0);
    }
    printf("The new sequence :\n");
    for(i = 0;i < n;i++){
        fputs(str[i],fp);
        fputs("\n",fp);
        printf("%s\n",str[i]);
    }
    return 0;
}
/*选择排序法：它的工作原理是每一次从待排序的数据元素中选出最小（或最大）的一个元素，
 存放在序列的起始位置，直到全部待排序的数据元素排完。
 如果后面的元素比他要小则用变量k记住它在数组中的位置(下标)，等到循环结束的时候，
 我们应该找到了最小的那个数的下标了，然后进行判断，如果这个元素的下标不是第一个元素的下标，
 就让第一个元素跟他交换一下值，这样就找到整个数组中最小的数了。
 然后找到数组中第二小的数，让他跟数组中第二个元素交换一下值，以此类推。*/
