#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
string  strout;

void Cal(string a,string b)
{
    char t = a[0];
 int pos = b.find(t);
 if(pos==1)
  strout += b[0];
 if(pos>1)
 {
  string x = a.substr(1,pos);
  string y = b.substr(0,pos);
  Cal(x,y);
 }
 if(b.size()-pos-1==1)
  strout += b[b.size()-1];
 if(b.size()-pos-1>1)
 {
  string x = a.substr(pos+1,b.size()-pos-1);
  string y = b.substr(pos+1,b.size()-pos-1);
  Cal(x,y);
 }
 strout += t;

}
int main()
{
    string a,b;

    while(cin >> a >> b)
    {
       strout.clear();
        Cal(a,b);
        cout << strout << endl;
    }
}

