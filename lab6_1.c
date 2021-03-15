#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    char s[n][1000],t[1000];
    for(i=0;i<n;i++)
        scanf("%s",s[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);
            }
        }
    }
        for(i=0;i<n;i++)
            printf("%s\n",s[i]);

return 0;
}
