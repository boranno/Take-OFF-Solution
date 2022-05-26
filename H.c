#include<stdio.h>
int main()
{
    int n,i,j,k,q,x,v,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d",&x);
        for(j=0;j<n-1;j++)
        {
            v=a[j+1]-a[j];
            x=x-v;
            if(x>=0)
            {
                s++;
            }
            else
            {
                break;
            }
        }
        if(s>=n-1)
        {
            printf("Homecoming\n");
        }
        else
        {
            printf("No way Home\n");
        }
        s=0;
    }
}
