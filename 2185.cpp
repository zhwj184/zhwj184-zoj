#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  long n,row,line,k,remain;
  while(cin>>n)
  {
   k=ceil((sqrt(8*(double)n+1)-1)/2)-1;
   remain=(long)n-k*(k+1)/2;
   if(k%2==1)
   {
     row=remain;
     line=k-remain+2;
   }
   else
   {
     row=k-remain+2;
     line=remain;
   }
   cout<<"TERM "<<n<<" IS "<<row<<"/"<<line<<endl;
}
return 0;
}
