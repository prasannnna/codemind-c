#include<stdio.h>
#include<math.h>
int main()
{
    int m,even=0,odd=0,sum;
    scanf("%d",&m);
    int arr[m];
    for(int i=0;i<m;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0;i<m;i+=2)
        {
            even+=arr[i];
        }
        for(int j=1;j<m;j+=2)
        {
            odd+=arr[j];
        }
        sum=abs(even-odd);
        printf("%d",sum);
}