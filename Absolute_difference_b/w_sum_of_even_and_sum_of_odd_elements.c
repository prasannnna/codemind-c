#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,even=0,odd=0,sum;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even+=arr[i];
        }
        else 
        {
            odd+=arr[i];
        }
    }
    sum=abs(even-odd);
    printf("%d",sum);
    
}