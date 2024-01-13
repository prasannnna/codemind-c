#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int search;
    scanf("%d",&search);
    int flag=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(search==arr[i][j])
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("1");
    }
    else
    {
    printf("0");
    }
}