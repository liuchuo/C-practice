/*写几个函数：
 1.输入10个职工的姓名和职工号；
 2.按职工号由小到大顺序排序，姓名顺序也随之调整；
 3.要求输入一个职工号，用这般查找法找出该职工的姓名，从主函数输入要查找的职工号，输出该职工的姓名。
 三个函数命名为 input sort search*/
#include <stdio.h>
#include <string.h>
#define N 10
int main()
{
    void input(int[],char name[][8]);
    void sort(int[],char name[][8]);
    void search(int,int[],char name[][8]);
    int num[N],number,flag = 1,c;
    char name[N][8];
    input(num,name);
    sort(num,name);
    while(flag == 1)
    {
        printf("\ninput number to look for:");
        scanf("%d",&number);
        search(number,num,name);
        printf("continue or not(Y/N)?");
        getchar();
        c = getchar();
        if(c == 'N' || c == 'n')
            flag = 0;
    }
    return 0;
}

void input(int num[],char name[N][8])
{
    int i;
    for(i = 0;i < N;i++)
    {
        printf("input NO.:");
        scanf("%d",&num[i]);
        printf("input name:");
        getchar();
        gets(name[i]);
    }
}

void sort(int num[],char name[N][8])
{
    int i,j,min,temp1;
    char temp2[8];
    for(i = 0;i < N-1;i++)
    {
        min = i;
        for(j = i;j < N;j++)
            if(num[min] > num[j])
                min = j;
        temp1 = num[i];
        strcpy(temp2,name[i]);
        num[i] = num[min];
        strcpy(name[i],name[min]);
        num[min] = temp1;
        strcpy(name[min],temp2);
    }
    printf("\nresult:\n");
    for(i = 0;i < N;i++)
        printf("\n%d%10s",num[i],name[i]);
}

void search(int n,int num[],char name[N][8]){
    int top,bott,mid,loca,sign;
    top = 0;
    bott = N - 1;
    loca = 0;
    sign = 1;
    if((n < num[0]) || (n > num[N - 1]))
        loca = -1;
    while((sign == 1) && (top <=bott)){
        mid = (bott + top)/2;
        if(n == num[mid]){
            loca = mid;
            printf("NO.%d,his name is %s.\n",n,name[loca]);
            sign = -1;
        }
        else if(n < num[mid])
            bott = mid - 1;
        else 
            top = mid + 1;
    }
    if(sign == 1 || loca == 0)
        printf("%d not been found.\n",n);
}