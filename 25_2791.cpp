#include <iostream>
#include<string>
#include <cctype>
using namespace std;

char a[10],b[10],sum[10];
int n;
int i,j,k,m;
int s1,s2,s;
int flag;
int main()
{
    cin >> n;
    while( n--)
    {
        cin >> a >> b;
        flag=1;
        s1=0;
        s2=0;
        s=0;
        k=strlen(a);
        for(i=0;i<k;i++)
        {
            if(a[i]>'0'&&a[i]<='9') flag=a[i]-'0';
            else {
                if(a[i]=='m') s1+=(flag*1000);
                else if(a[i]=='c') s1+=(flag*100);
                else if(a[i]=='x') s1+=(flag*10);
                else s1+=(flag*1);
                flag=1;
            }
        }
       // cout << s1 << endl;
        k=strlen(b);
        flag=1;
        for(i=0;i<k;i++)
        {
            if(b[i]>'0'&&b[i]<='9') flag=b[i]-'0';
            else {
                if(b[i]=='m') s2+=(flag*1000);
                else if(b[i]=='c') s2+=(flag*100);
                else if(b[i]=='x') s2+=(flag*10);
                else s2+=(flag*1);
                flag=1;
            }
        }
       // cout << s2 << endl;
        s=s1+s2;
        //cout << s << endl;
        k=0;
            if(s%10!=0)
            {
                sum[k++]='i';
                if(s%10!=1)sum[k++]=('0'+s%10);

            }
             s/=10;
            if(s%10!=0)
            {
                sum[k++]='x';
                if(s%10!=1)sum[k++]=('0'+s%10);

            }
             s/=10;
            if(s%10!=0)
            {
                sum[k++]='c';
                if(s%10!=1)sum[k++]=('0'+s%10);

            }
             s/=10;
            if(s%10!=0)
            {
                sum[k++]='m';
                if(s%10!=1)sum[k++]=('0'+s%10);
                s/=10;
            }
            for(j=k-1;j>=0;j--)
            cout << sum[j];
            cout << endl;
            
        
    }
}
            
        
        
