#include<stdio.h>
int main()
{
    int n,p=1,i,limit=0;
    printf("enter the n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        p=2*p;
    
    if(n==p)
    {
        limit=1;
    }
    }
    if(limit==1)
    printf("yes");
    else
    printf("no");
    
    
    return 0;
}

