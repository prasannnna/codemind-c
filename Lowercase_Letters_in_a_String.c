#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]",str);
    int i=0,cnt=0;
    while(str[i]!=NULL)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            cnt++;
        }
        i++;
    }
    printf("%d",cnt);
    
}