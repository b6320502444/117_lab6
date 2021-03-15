#include<stdio.h>
int main()
{
    int i,j,n=1;
    scanf("%d",&n);
    char s[n][1000];
    for(i=0;i<n;i++)
    scanf(" %[^\n]s",s[i]);
    for(j=0;j<26;j++)
    {
        for(i=0;i<n;i++)
            if((s[i][0]==65+j)||(s[i][0]==97+j))
                printf("%s\n",s[i]);
    }
return 0;
}
