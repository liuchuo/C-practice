//
//  main.c
//  20150525-1
//
//  Created by 欣 陈 on 15/5/25.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//第10章 对文件的输入输出
//从键盘输入一些字符，逐个把它们送到磁盘上去，直到用户输入一个"#"为止
#include <stdio.h>
#include <stdlib.h>
int main(){
  //  FILE *fp;
    char ch,filename[10];
    printf("请输入所用的文件名：");
    scanf("%s",filename);
   
    //if((fp = fopen(filename,"w")) == NULL){
      //  printf("无法打开此文件\n");
        //exit(0);
 //   }
    
    ch = getchar();
    printf("请输入一个准备存储到键盘的字符串（以#结束）：");
    ch = getchar();
    while(ch != '#'){
       // fputc(ch,fp);
        putchar(ch);
        ch = getchar();
    }
    //  fclose(fp);
    putchar(10);
    return 0;
}
