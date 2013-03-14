#include <iostream>
#include <stack>
#include<vector>

#include <string>
using namespace std;

vector<string> vs;
vector<int> ord;

stack<string> s1;
stack<string> s2;
int main()
{

 int d;
 cin >> d;
 for(int i  =0;i < d;i++)
 {
  while(!s1.empty())
   s1.pop();
  s1.push("http://www.acm.org/");
  while(!s2.empty() )
   s2.pop();
   string s;
   
   while( cin >> s)
   {
	   if(s=="QUIT")
		   break;
	   if(s=="VISIT")
	   {
		   cin >> s;
		   s1.push(s);
		   cout << s << endl;
		   while(!s2.empty())
             s2.pop();
	   }
	   if(s=="BACK")
	   {
		   if(s1.size()==1)
			   cout  << "Ignored" << endl;
		   else
		   {
			   s2.push(s1.top());
			   s1.pop();
			   cout << s1.top() << endl;
		   }
	   }
	   if(s=="FORWARD")
	   {
		   if(s2.empty())
			    cout  << "Ignored" << endl;
		   else
		   {
			   cout << s2.top() << endl;
			   s1.push(s2.top());
			   s2.pop();
		   }
	   }
   }
	   if(i!=d-1) cout << endl;
   }
 }
			  


