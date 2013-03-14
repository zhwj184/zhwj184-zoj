#include<stdio.h>
#include<iostream.h>
#include<string.h>
#include<ctype.h>
main()
{
    char s[21],t[21];
    int i,j,k,m,n;
    while(cin>>s)
    {
        m=strlen(s);
        int k=0;
        if(s[0]=='B'||s[0]=='F'||s[0]=='P'||s[0]=='V')t[0]='1';
        else if((s[0]=='C'||s[0]=='G'||s[0]=='J'||s[0]=='K')||(s[0]=='Q'||s[0]=='S'||s[0]=='X'||s[0]=='Z'))t[0]='2';
        else if(s[0]=='D'||s[0]=='T')t[0]='3';
        else if(s[0]=='L')t[0]='4';
        else if(s[0]=='M'||s[0]=='N')t[0]='5';
        else if(s[0]=='R')t[0]='6';
        else t[0]='0';
        for(i=1;i<m;i++)
        {
            if(s[i]!=s[i-1])
            {

                  if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')t[i]='1';
                  else if((s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K')||(s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z'))t[i]='2';
                   else if(s[i]=='D'||s[i]=='T')t[i]='3';
                    else if(s[i]=='L')t[i]='4';
                    else if(s[i]=='M'||s[i]=='N')t[i]='5';
                    else if(s[i]=='R')t[i]='6';
                     else t[i]='0';
            }
            else t[i]='0';
        }
        if(t[0]!='0')printf("%c",t[0]);
        for(i=1;i<m;i++)
        if(t[i]!='0'&&t[i]!=t[i-1])printf("%c",t[i]);
        printf("\n");
    }
}


