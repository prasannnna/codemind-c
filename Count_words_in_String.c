#include<stdio.h>
int main()
{
    char str[101];
    int count=0;
    scanf("%[^
]s",&str);
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        {
            count++;
        }
    }
    printf("%d",count+1);
}