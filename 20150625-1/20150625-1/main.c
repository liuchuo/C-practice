//
//  main.c
//  20150625-1
//
//  Created by 欣 陈 on 15/6/25.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

1.数列累和

eg1：求1+2+3+...+n

#include <stdio.h>
int main(){
    int i,s,n;
    s = 0;
    printf("输入n的值：");
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        s += i;
    }
    printf("1+2+3+...+n = %d",s);
    return 0;
}
2.累乘

eg2：求1*2*3*...*n

#include <stdio.h>
int main(){
    int i,s,n;
    s = 1;
    printf("输入n的值：");
    scanf("%d",&n);
    for(i = 1;i <= n;i++){
        s *= i;
    }
    printf("1*2*3*...*n = %d",s);
    return 0;
}

3.求最大或者最小值

#include <stdio.h>
int main(){
    float a,y,min,max;
    int i,n;
    printf("求n个数的最大值和最小值，请输入n:");
    scanf("%d",&n);
    printf("请输入这n个数：");
    scanf("%f",&a);
    min = a;
    max = a;
    for(i = 0;i < n-1;i++){
        scanf("%f",&y);
        if(y < min)
            min = y;
        if(y > max)
            max = y;
    }
    printf("min = %f,max = %f",min,max);
    return 0;
}


4.判断素数

//写一个判断素数的函数，在主函数里输入一个数，输出判断结果

#include <stdio.h>
int main()
{
    int prime(int);
    int a;
    printf("输入一个数：\n");
    scanf("%d",&a);
    if(prime(a))
        printf("%d is a prime.\n",a);
    else
        printf("%d is not a prime.\n",a);
    return 0;
}

int prime(int n)
{
    int flag = 1,i;
    for(i = 2;i < n/2 && flag == 1;i++)
    {
        if(n % i == 0)
            flag=0;
    }
    return(flag);
}


5.判断闰年

#include <stdio.h>
int main()
{
    int year;
    printf("请输入年份：");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 || year%400==0)
        printf("该年为闰年");
    else printf("该年不是闰年");
    return 0;
}

6.删除字符串中某个字符

#include <stdio.h>
#include <string.h>
void delchar(char *str,char del){
    char *p = str;
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
    printf("请输入一个字符串（长度不超过30，以回车结束）：");
    gets(s);
    printf("请输入要删除的字符：");
    del = getchar();
    delchar(s,del);
    printf("%s\n",s);
    return 0;
}

7.向字符串中插入某个字符
#include <stdio.h>
#include <string.h>
int main(){
    char a[100],x;
    int len,i,t;
    printf("输入插入的位置:");
    scanf("%d",&t);
    printf("输入要插入的字符:");
    scanf("%c",&x);
    printf("输入字符串:");
    scanf("%s",a);
    len = strlen(a);
    printf("\n");
    for(i = len-1;i >= t-1;i--){
        a[i + 1] = a[i];
    }
    a[t - 1] = x;
    a[len + 1] = '\0';
    printf("%s\n",a);
    return 0;
}


8.三个数排序

//输出abc三个数中的最大数

#include <stdio.h>
int main()
{
    int a,b,c,temp;
    printf("plese enter 3 numbers:");
    scanf("%d,%d,%d",&a,&b,&c);
    temp = (a>b)?a:b;
    temp = (temp>c)?temp:c;
    printf("max=%d",temp);
    return 0;
}


9.字符串逆序存放
#include <stdio.h>
#include <string.h>
void fun(char a[]){
    int i,length;
    char t;
    length = strlen(a);
    for(i = 0;i < length/2;i++){
        t = a[i];
        a[i] = a[length-1-i];
        a[length-1-i] = t;
    }
}

int main(){
    char a[10];
    printf("输入字符串:");
    gets(a);
    fun(a);
    puts(a);
}

10.数组元素逆序存放

//数组中所有的值逆序重新存放

#include <stdio.h>
#define N 5
int main()
{
    int a[N],i,temp;
    printf("enter array a:\n");
    for(i = 0;i < N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array a : \n");
    for(i = 0;i < N;i++)
    {
        printf("%d",a[i]);
    }
    for(i = 0;i < N/2;i++)//把左右两边对称的数交换即可~~
    {
        temp = a[i];
        a[i] = a[N-i-1];
        a[N-i-1] = temp;
    }
    printf("\nnow array\n");
    for(i = 0;i < N;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}

11.排序（数值）
//用选择法对10个整数排序
#include <stdio.h>
int main()
{
    int i,j,min,temp,a[11];
    printf("enter data:\n");
    for(i = 1;i <= 10;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);/*输入乱序*/
    }
    printf("\n");
    printf("the orginal numbers:\n");
    for(i = 1;i <= 10;i++)
        printf("%5d",a[i]);
    printf("\n");/*输出乱序*/
    for(i = 1;i <= 9;i++)
    {
        min = i;
        for(j = i + 1;j <= 10;j++)
            if(a[min] > a[j]) min = j;
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
    printf("the sorted numbers:\n");/*输出顺序~*/
    for(i = 1;i <= 10;i++)
        printf("%5d",a[i]);
    printf("\n");
    return 0;
}