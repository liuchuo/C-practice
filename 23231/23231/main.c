#include <stdio.h>
#define N 20
int main()
{
    int i,j,flag=0;
    char s[N];
    gets(s);
    char a;
    a = getchar();
    for ( i = 0; i < N; i++ )
    {
        if ( s[i] == a )
        {
            flag = 1;
            for ( j = i; j < N-1; j++ )
                s[j] = s[j+1];
            puts ( s );
            break;
        }
    }
    if(flag == 0)
        printf("not find\n");
    return 0;
}