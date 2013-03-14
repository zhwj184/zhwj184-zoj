#include <string>
#include <cctype>
#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;
int main()
{
    int n;
    double dis;
    char s[10];
    int m,sec;
    int i,j,k;
    int id;
    double tot;
    cin >> n >> dis;

        while(cin >> id)
        {
           int flag=0;
           tot=0;
           for(i=0;i<n;i++)
           {
            cin >> s;
            if(s[0]=='-') {flag=1;}
            else
            {
                tot+=(s[0]-'0')*3600+((s[2]-'0')*10+(s[3]-'0'))*60+((s[5]-'0')*10+(s[6]-'0'));
            }
           }
            printf("%3d: ", id);
            if(flag) cout << "-" << endl;
            else
            {
                m=(int) (tot/dis+0.5);
                printf("%d:%.2d min/km\n",m/60,m%60);
            }

        }

}

            
        

