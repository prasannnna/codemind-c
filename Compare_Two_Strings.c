#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    scanf("%s %s",s1,s2);
    int i=0,flag=0;
    int a,b;
    a=strlen(s1);
    b=strlen(s2);
    if(a!=b)
    printf("Strings are not Equal");
    else{
    while(s1[i]!=NULL && s2[i]!=NULL)
    {
        if(s1[i]==s2[i])
        {
            flag=1;
            break;
        }
        i++;
    }
    if(flag==1)
    {
        printf("Strings are Equal");
    }
    else
    {
        printf("Strings are not Equal");
    }
    }
}