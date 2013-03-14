              #include<stdio.h>
#include<string.h>

int main()
{
    #ifndef ONLINE_JUDGE
 freopen ("Do the Untwist.txt","r",stdin);
#endif
    int n,k,i;
    char str[600];
    int c[600],p[600];
    while(EOF!=(scanf("%d",&k))&&k!=0)
    {
        //getchar();
        //gets(str);
  scanf("%s",str);
        n=strlen(str);
        for(i=0;i<n;i++)
        {
            if(str[i]=='_')
            {
                c[i]=0;
            }
            else
            {
                if(str[i]=='.')
                {
                    c[i]=27;
                }
                else
                {
                    c[i]=str[i]-'a'+1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
   p[(k*i)%n]=(c[i]+i)%28;
        }
        for(i=0;i<n;i++)
        {
            if(p[i]==0)
            {
                printf("_");
            }
            else
            {
                if(p[i]==27)
                {
                    printf(".");
                }
                else
                {
                    printf("%c",p[i]-1+'a');
                }
            }
        }
        printf("\n");
    }
    return(0);
}

