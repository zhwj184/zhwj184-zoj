#include<iostream>
#include<string>
using namespace std;
int main()
{int col,row,i,j,len;
string s,str[200];
while(cin>>col&&col)
{cin>>s;
   len=s.size();
   row=len/col;
   for(i=0;i<len;i+=col)
    if((i/col)%2==0)
      str[i/col]=s.substr(i,col);
    else
      str[i/col]=s.substr(i,col),
      reverse(str[i/col].begin(),str[i/col].end());
   for(i=0;i<col;i++)
     for(j=0;j<row;j++)
       cout<<str[j][i];
   cout<<endl;
}
return 0;
}
