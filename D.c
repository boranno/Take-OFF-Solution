#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=b+c+d;
    if (a==1)
    {
        printf("YES\n");
    }
    else
    {
        if (e>=2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}
