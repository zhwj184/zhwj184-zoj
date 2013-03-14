#include<stdio.h>
#include<string.h>
#include <iostream.h>
char miror1[]={'A','b','b','b','3','b','b','H','I','L','b','J','M',
               'b','O','b','b','b','2','T','U','V','W','X','Y','5'};   //没有对应的置为小写的'b'
char miror2[]={'0','1','S','E','b','Z','b','b','8','b'};

bool ispai(char S[],int l)
{
    for(int i=0;i<(l+1)/2;i++)
    {
        if(S[i]!=S[l-1-i])
        {
            if((S[i]=='0'||S[i]=='O')&&(S[l-1-i]=='0'||S[l-1-i]=='O'))
                continue;
            return false;
        }
    }
    return true;
}

bool ismir(char S[],int l)
{
    for(int i=0;i<(l+1)/2;i++)
    {
        if(S[i]>='A'&&S[i]<='Z')
        {
            if(miror1[S[i]-'A'] != S[l-1-i])
            {
                if(S[i]=='O'&& (S[l-1-i]=='0' || S[l-1-i]=='O') )
                    continue;
                return false;
            }
        }
        else
        {
            if(miror2[S[i]-'0'] != S[l-1-i])
            {
                if(S[i]=='0'&&(S[l-1-i]=='O'||S[l-1-i]=='0'))
                    continue;
                return false;
            }
        }
    }
    return true;
}
int main()
{
    char S[25];
    int i,j,len; bool pai,mir;
    while(cin>>S)
    {
        len = strlen(S);
        pai = ispai(S,len);
        mir = ismir(S,len);
        if(mir && pai){printf("%s -- is a mirrored palindrome.\n\n",S);continue;}
        if(!mir&&!pai){printf("%s -- is not a palindrome.\n\n",S);    continue; }
        if(!mir&& pai){printf("%s -- is a regular palindrome.\n\n",S);continue; }
        if(mir &&!pai){printf("%s -- is a mirrored string.\n\n",S);   continue; }
    }
    return 0;
}
