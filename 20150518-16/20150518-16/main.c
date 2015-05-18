//
//  main.c
//  20150518-16
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//求Sn=a+aa+aaa+aaaa+⋯⋯+aaaaaaa(n个)的值
#include <stdio.h>
int main()
{
    int a,n;
    int i = 1;
    int sn = 0;
    int tn = 0;
    printf("请输入a,n：");
    scanf("%d,%d",&a,&n);
    while(i<=n)
    {
        tn = tn + a;
        sn = sn + tn;
        a = a * 10;
        i++;
    }
    printf("a+aa+aaa+⋯⋯=%d\n",sn);/*引号和sn之间不要忘记逗号~~~~~*/
    return 0;
}
