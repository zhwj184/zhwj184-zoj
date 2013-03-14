



#include <iostream.h>
#include <string.h>
#include <fstream.h>
ifstream f("h.in");
#define cin f
int main()
{
    char a[12],b[12],c[12];
    while(cin>>a>>b)
    {
        if(strcmp(a,"0")==0 && strcmp(b,"0")==0)
        return 0;
        int flag=0;
        int sum=0;
        int i;
        for(i=0;i<11;i++)
        c[i]='0';
        c[11]='\0';
        for(i=strlen(a)-1;i>=0;i--)
        c[strlen(a)-1-i]=a[i];
        strcpy(a,c);
        for(i=0;i<11;i++)
        c[i]='0';
        c[11]='\0';
        for(i=strlen(b)-1;i>=0;i--)
        c[strlen(b)-1-i]=b[i];
        strcpy(b,c);
        //cout<<a<<endl;
        //cout<<b<<endl;
        for(i=0;i<11;i++)
        {
            int k=a[i]-'0'+b[i]-'0'+flag;
           // cout<<k<<" ";
            if(k>=10)
            {
                flag=1;
                sum++;
            }
            else
            flag=0;
        }
        if(flag==1)
        sum++;
        if(sum==0)
        cout<<"No carry operation."<<endl;
        else if(sum==1)
        cout<<"1 carry operation."<<endl;
        else
        cout<<sum<<" carry operations."<<endl;
    }
}

   #include<iostream>
#include<string>
using namespace std;
int digit(string s1,string s2){
 int n=0,i;
    while(s1.length()<s2.length())
  s1='0'+s1;
 while(s1.length()>s2.length())
  s2='0'+s2;
 s1='0'+s1;
 s2='0'+s2;
    int len=s1.length();
 for(i=len-1;i>=1;i--){
  s1[i]=s1[i]+s2[i]-'0';
  if(s1[i]>'9'){

   s1[i]-=10;
   s1[i-1]++;
   n++;
  }
  if (s1[i]>'9') n++;
 }
 return n;
}
int main(){
    string a,b;
 while(1){
  int sum=0;
     cin>>a>>b;
  if(a=="0"&&b=="0") break;
  sum=digit(a,b);
  if(sum==0)cout<<"No carry operation."<<endl;
        if(sum!=1&&sum!=0) cout<<sum<<" "<<"carry operations."<<endl;
  if(sum==1) cout<<sum<<" "<<"carry operation."<<endl;
 }
    return 0;
}
