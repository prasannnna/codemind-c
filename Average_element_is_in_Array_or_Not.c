#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int sum=0,avg,v;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        avg=sum/(i+1);
    }
    for(int i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            v=1;
        }
    }
if(v==1)
{
    printf("True");
}
else
{
    printf("False");
}
}