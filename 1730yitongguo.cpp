#include<iostream>
using namespace std;
int main( ){
int t,n;
cin>>t;
while(t--){
int sum=0;
int flag=1;
cin>>n;
if(n==1||n==2){cout<<0<<endl;flag=0;}
if(n==3){cout<<1<<endl;flag=0;}
for(int i=1;i<=(n-4)/2+1;i++)
sum+=2*i;
sum+=(2+(n-4)/2)*((n-4)%2);
if(flag)cout<<sum<<endl;
}
return 0;
}
