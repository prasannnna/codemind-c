#include<stdio.h>
int main()
{
    int m,n,sum=0,sumo=0;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]%2==0)
            {
                sum+=arr[i][j];
            }
            else if(arr[i][j]%2!=0)
            {
                 sumo+=arr[i][j];
            }
        }
    }
    printf("%d %d",sum,sumo);
}