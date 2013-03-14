#include <iostream.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int s[27],t[27];
    int i,j,k,m,n;
    char c,ch;
    int a;
    scanf("%d\n",&a);
    for(i=0;i<a;i++)
    {
        for(k=0;k<27;k++)
        {
            s[k]=0;
            t[k]=0;
        }

        while(cin.get(ch))
        {
            if(ch=='\n')break;
            s[0+(ch-'a')]++;
        }
        while(cin.get(ch))
        {
            if(ch=='\n')break;
            t[0+(ch-'a')]++;
        }
        int count=0;
        for(m=0;m<27;m++)
        {

            if(s[m]>t[m])
             count+=(s[m]-t[m]);
            else
                   count+=(t[m]-s[m]);
        }
        printf("Case #%d:  %d\n",i+1,count);


    }
}
