#include <iostream.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>
int main()
{
    char party[30][100];
    char name[30][100];
    int vot[30];
    char buf[100];
    int i,j,k,m,n;
    int s,t;
    while( (scanf("%d ",&n))!=EOF)
    {
        for(i=0;i<n;i++)
        {
            gets(name[i]);
            gets(party[i]);
            vot[i]=0;
        }
        scanf("%d ",&t);
        for(i=0;i<t;i++)
        {
            gets(buf);
            //cin >> buf;
            for(j=0;j<n;j++)
            {
                if((strcmp(name[j],buf))==0)
                 vot[j]++;
            }
        }
       // cout << t << endl;
        s=-1;
        k=-1;
        for(i=0;i<n;i++)
        {
            if(vot[i]>s)
            {
                s=vot[i];
                k=i;
            }
            else if(vot[i]==s)
            {
                k=-1;
            }
        }
        if(k==-1) cout << "tie\n" ;
        else cout << party[k] << endl;
    }
}
