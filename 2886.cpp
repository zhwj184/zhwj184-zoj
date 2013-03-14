#include<iostream>
#include<cctype>
#include<cstring>
#include <cstdio>
using namespace std;

char str[1001];
int coun;
char c,ch;

int main()
{
    int cas;
    scanf("%d",&cas);
   // cin >> cas;
    while( cas--)
    {
        //cin >> str;
        scanf("%s",str);
        int len=strlen(str);
        c=str[0];
        coun=1;
        for(int i=1;i<len;i++)
        {
            if(str[i]==c)
                coun++;
            else {
                printf("%d%c",coun,c);
               // cout << coun << c;
                c=str[i];
                coun=1;
             }
        }
        printf("%d%c\n",coun,c);
        //cout << coun << c;
       // cout << endl;
    }
}
