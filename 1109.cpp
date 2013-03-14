#include <iostream>
#include <map>
#include<cstdio>
#include<string>
using namespace std;
int main() {
    char buf[100],buf1[100],buf2[100];
    map<string,string> m;
    map<string ,string>::iterator p;
    while(gets(buf))
    {
        if(strcmp(buf,"")==0)break;
        sscanf(buf,"%s%s",buf1,buf2);
        m[buf2]=buf1;
    }
    while(gets(buf))
    {
        // if(strcmp(buf,"")==0)break;
        p=m.find(buf);
        if(p!=m.end())
          cout << m[buf] << endl;
        else
          cout << "eh" << endl;
    }
  }
