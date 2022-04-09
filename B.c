#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d",&i);
    a=i%2;
    if (i==0)
    {
        printf("The Universe of our Hero\n");
    }
    else if(a==0)
    {
         printf("The Universe of Spider-Man 1\n");
    }
    else
    {
        printf("The Universe of Spider-Man 2\n");
    }
    return 0;
}
