#include <string.h>
#include <ctype.h>
#include <iostream.h>
#include <stdio.h>
int main()
{
    char s[32],t[32];
    long a,b,c;
    int i,j,k;
    while(cin >> s)
    {
        k=strlen(s);
        strcpy(t," ");
       // cout << k << endl;
        for(i=k-1;i>=0;i--)
        t[k-1-i]=s[i];
       // cout << t << endl;
        a=0;
        b=0;
        c=0;
        for(i=0;;i++)
        {
            if(t[i]=='=') break;
            c=c*10+(t[i]-'0');
        }
        for(j=i+1;;j++)
        {
            if(t[j]=='+') break;
            a=a*10+(t[j]-'0');
        }
        for(i=j+1;i<k;i++)
        {
            b=b*10+(t[i]-'0');
        }
       // sscanf (t, "%d=%d+%d", &c, &b, &a);
        printf(c==a+b?"True\n":"False\n");
        if(a==0&&b==0&&c==0) break;
    }
}
