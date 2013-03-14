http://acm.zju.edu.cn/show_problem.php?pid=1496


#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
#define PI 3.14159
int main()
{
    int front[3],rear[9];
    int dia,tar;
    int i,j,k,m,n;
    double min,max;
    double res;
    int cas;
    cin >> cas;
    while( cas-- )
    {
        for(i=0;i<3;i++)
         cin >> front[i];
        for(i=0;i<9;i++)
         cin >> rear[i];
        cin >> dia;
        cin >> tar;
        min=100000;
        m=0;
        n=0;
        res=0;
        for(i=0;i<3;i++)
         for(j=0;j<9;j++)
         {
            max=abs(((double)front[i]/(double)rear[j])*PI*dia-tar);
            if(min>max)
            {
                min=max;
                m=i;
                n=j;
                res= ((double)front[i]/(double)rear[j])*PI*dia;
            }
         }
         cout << "A gear selection of " <<front[m]<<"/" <<
 rear[n];
         printf(" produces a gear size of %.3f.\n",res);
         if(cas>0) cout << endl;
             // setprecision(3)<<" produces a gear size of "<<res <<
 "." << endl;
    }
}
  