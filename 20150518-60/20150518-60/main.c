//
//  main.c
//  20150518-60
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//"我们俩的年龄之积是年龄之和的6倍”。小明又说：“她们可不是双胞胎，年龄差肯定也不超过8岁啊。”
#include <stdio.h>
int main()
{
    int i,j;
    int sum,mul;
    for(i = 1;i < 99;i++)
        for(j = i + 1;j <= i + 7;j++){
            sum = i + j;
            mul = i * j;
            if(mul == 6*sum)
                printf("i = %d,j = %d\n",i,j);
        }
    return 0;
}
