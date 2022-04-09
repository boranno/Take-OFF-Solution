#include<stdio.h>
int main()
{
    int n,d,c,e,f=0,i,j,k;
    scanf("%d%d",&n,&d);
    int w[n];
    for (i = 0;i<n;i++)
    {
        scanf("%d",&w[i]);
    }
    for (j =0;j<n;j++)
    {
        c=w[j];
        for (k = 0; k<n;k++)
        {
            if (j!=k)
            {
                e=w[j]+w[k];
                if (e>=d)
                {
                    printf("YES\n");
                    goto lable1;
                }
                else
                {
                    f=1;
                }
            }
        }
    }
    if (f==1)
    {
        printf("NO\n");
    }
    lable1:
        {
        }
    return 0;
}
