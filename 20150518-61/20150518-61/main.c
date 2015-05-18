//
//  main.c
//  20150518-61
//
//  Created by 欣 陈 on 15/5/18.
//  Copyright (c) 2015年 欣 陈. All rights reserved.
//

//由4个不同的数字，组成的一个乘法算式，它们的乘积仍然由这4个数字组成。
// 如果满足乘法交换律的算式算作同一种情况，那么，包含上边已列出的3种情况，一共有多少种满足要求的算式。
#include <stdio.h>
int main()
{
    int a,b,c,d,i;
    int m,n,result;
    int count1 = 0;
    int count2 = 0;
    int arr[4];
    for(a = 1;a <= 9;a++)
        for(b = 1;b <= 9;b++)
            for(c = 0;c <= 9;c++)
                for(d = 0;d <= 9;d++)
                {
                    if(a != b && a != c && a != d &&
                       b != c && b != d &&
                       c != d)
                    {
                        m = a;
                        n = b*100 + c*10 + d;
                        result = m * n;
                        if(result < 1000 || result > 10000) {
                            continue;
                        }
                        for(i = 0;i < 4;i++)
                        {
                            arr[i] = result % 10;
                            result = result / 10;
                        }
                        result = 0;
                        for(i = 0;i < 4;i++)
                        {
                            if(arr[i] == a)
                            {
                                result = 1;
                                break;
                            }
                        }
                        if(result)
                        {
                            result = 0;
                            for(i = 0;i < 4;i++)
                            {
                                if(arr[i] == b)
                                {
                                    result = 1;
                                    break;
                                }
                            }
                            if(result)
                            {
                                result = 0;
                                for(i = 0;i < 4;i++)
                                {
                                    if(arr[i] == c)
                                    {
                                        result = 1;
                                        break;
                                    }
                                }
                                if(result)
                                {
                                    result = 0;
                                    for(i = 0;i < 4;i++)
                                    {
                                        if(arr[i] == d)
                                        {
                                            result = 1;
                                            break;
                                        }
                                    }
                                    if(result)
                                    {
                                        count1++;
                                        printf("%d * %d%d%d = %d\n",a,b,c,d,m*n);
                                        
                                    }
                                }
                                
                            }
                            
                            
                        }
                        
                        
                    }
                    
                }
    printf("count1 = %d\n",count1);
    
    for(a = 1;a <= 9;a++)
        for(b = 0;b <= 9;b++)
            for(c = 1;c <= 9;c++)
                for(d = 0;d <= 9;d++)
                {
                    if(a != b && a != c && a != d && 
                       b != c && b != d && 
                       c != d)
                    {
                        m = a*10 + b;
                        n = c*10 + d;
                        result = m * n;
                        if(result < 1000 || result > 10000) {
                            continue;	
                        }
                        for(i = 0;i < 4;i++)
                        {
                            arr[i] = result % 10;
                            result = result / 10;
                        }
                        result = 0;
                        for(i = 0;i < 4;i++)
                        {
                            if(arr[i] == a)
                            {
                                result = 1;
                                break;
                            }
                        }
                        if(result)
                        {
                            result = 0;
                            for(i = 0;i < 4;i++)
                            {
                                if(arr[i] == b)
                                {
                                    result = 1;
                                    break;
                                }
                            }
                            if(result)
                            {
                                result = 0;
                                for(i = 0;i < 4;i++)
                                {
                                    if(arr[i] == c)
                                    {
                                        result = 1;
                                        break;
                                    }
                                }
                                if(result)
                                {
                                    result = 0;
                                    for(i = 0;i < 4;i++)
                                    {
                                        if(arr[i] == d)
                                        {
                                            result = 1;
                                            break;
                                        }
                                    }
                                    if(result)
                                    {	
                                        count2++;
                                        printf("%d%d * %d%d = %d\n",a,b,c,d,m*n);
                                    }
                                }
                                
                            }
                            
                            
                        }
                        
                        
                    }
                    
                }
    printf("count2 = %d\n",count2);
    
				return 0;
}
