#include <iostream>
#include <cstring>
#include <cstdio>
#include <cctype>
using namespace std;
int main()
{
    long j,k,m,n,i;
    int cas;
    char s[200];
    double p,u,I;
    int flag;
    int t,r;
    char ch;
    double res;
    //cin >> cas;
    scanf("%d",&cas);
    getchar();
    for(r=1;r<=cas;r++)
    {
       // strcmp(s,"");
        gets(s);
        k=strlen(s);
        p=0;
        u=0;
        I=0;
        flag=0;
       // cout << k << endl;
        for(i=0;i<k;i++)
        {
            if(s[i]=='P'&&s[i+1]=='=')
            {
               // p=0;
                flag=1;
                m=10;
                n=0;
                for(j=i+2;j<k;j++)
                {
                    if(s[j]!='.'&&s[j]>='0'&&s[j]<='9')
                    {
                        p=p*m+(s[j]-'0');
                    }
                    if(s[j]=='.')
                    {
                        n=j;
                    }
                    else if(s[j]<'0'||s[j]>'9') break;
                }
                for(t=n+1;t<j&&n!=0;t++)
                {
                    p/=10;
                }
                if(s[j]=='m') p/=1000;
                else if(s[j]=='k') p*=1000;
                else if(s[j] =='M') p*=1000000;
              //  cout << p << endl;

            }
            else if(s[i]=='U'&&s[i+1]=='=')
            {
               // u=0;
                m=10;
                n=0;
                for(j=i+2;j<k;j++)
                {
                    if(s[j]!='.'&&s[j]>='0'&&s[j]<='9')
                    {
                        u=u*m+(s[j]-'0');
                    }
                    if(s[j]=='.')
                    {
                        n=j;
                    }
                    else if(s[j]<'0'||s[j]>'9') break;
                }
                for(t=n+1;t<j&&n!=0;t++)
                {
                    u/=10;
                }
                if(s[j]=='m') u/=1000;
                else if(s[j]=='k') u*=1000;
                else if(s[j] =='M') u*=1000000;
               // cout << u << endl;

            }
            else if(s[i]=='I'&&s[i+1]=='=')
            {
              //  I=0;
                m=10;
                n=0;
                for(j=i+2;j<k;j++)
                {
                    if(s[j]!='.'&&s[j]>='0'&&s[j]<='9')
                    {
                        I=I*m+(s[j]-'0');
                    }
                    if(s[j]=='.')
                    {
                        n=j;
                    }
                    else if(s[j]<'0'||s[j]>'9') break;
                }
                for(t=n+1;t<j&&n!=0;t++)
                {
                    I/=10;
                }
                if(s[j]=='m') I/=1000;
                else if(s[j]=='k') I*=1000;
                else if(s[j] =='M') I*=1000000;
              //  cout << I << endl;

            }
        }
        if(flag)
        {
            if(u!=0)
            {
                ch='I';
                res=p/u;
            }
            else
            {
                ch='U';
                res=p/I;
            }
        }
        else
        {
            ch='P';
            res=u*I;
        }
       // res=(int)(res*100);
       // res/=100;
        //res+=0.005;
        if(ch=='I')
        {
         cout <<"Problem #" << r << endl;
         printf ("I=%.2lfA\n",res);
        }
        else   if(ch=='U')
        {
         cout <<"Problem #" << r << endl;
         printf ("U=%.2lfV\n",res);
        }
        else
        {
         cout <<"Problem #" << r << endl;
         printf ("P=%.2lfW\n",res);
        }
        cout << endl;
    }
}


        
