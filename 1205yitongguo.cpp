#include<iostream>
#include<string>
using namespace std;
int main()
{
string str1,str2;
char str[101];
int code1[100],code2[100];
int len1,len2;
int i,j,k;
while(cin>>str1>>str2)
{
len1=str1.size();
len2=str2.size();
for(i=0;i<len1;i++)
{
if(str1[i]>='0'&&str1[i]<='9')
code1[i]=str1[i]-'0';
else
code1[i]=str1[i]-'a'+10;
}
for(i=0;i<len2;i++)
{
if(str2[i]>='0'&&str2[i]<='9')
code2[i]=str2[i]-'0';
else
code2[i]=str2[i]-'a'+10;
}
i=len1-1;
j=len2-1;
k=0;
int tmp=0,left,sum;
while(i>=0&&j>=0)
{
sum=code1[i]+code2[j]+tmp;
tmp=sum/20; //????
left=sum%20;
if(left>=10)
str[k]='a'+left-10;
else
str[k]='0'+left;
k++;
i--;
j--;
}
while(i>=0)
{
sum=code1[i]+tmp;
tmp=sum/20; //????
left=sum%20;
if(left>=10)
str[k]='a'+left-10;
else
str[k]='0'+left;
k++;
i--;
}
while(j>=0)
{
sum=code2[j]+tmp;
tmp=sum/20; //????
left=sum%20;
if(left>=10)
str[k]='a'+left-10;
else
str[k]='0'+left;
k++;
j--;
}
if(tmp)
str[k++]='0'+tmp;
for(i=k-1;i>=0;i--)
cout<<str[i];
cout<<endl;

}
return 0;
}

