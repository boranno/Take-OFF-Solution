#include<stdio.h>
int main()
{
    int T,i,A,B,j,c=1;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    {
        int Num;
        scanf("%d %d",&A,&B);
        for(j=1;j<1000000;j++)
        {
            if(j%A==0 && j%B==0)
            {
                Num=j;
                break;
            }
        }
        printf("Case %d: %d\n",c,Num);
        c++;
    }
}
