#include<stdio.h>
int main()
{
    int n,cnt=0,cnt2=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
            if(arr[i]%2==0)
            {
                cnt++;
            }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0 &&i%2==0)
        {
            cnt2++;
        }
    }
    if(cnt==cnt2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}