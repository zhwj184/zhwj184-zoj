#include<iostream>
#include <cstring>
using namespace std;

int cas;
int n;
int sum;
int t;
int data[101];

int main()
{
    cin >> cas;
    int max,min;
    while(cas--){
        cin >> n;
        min=100l;
        max=0;
        for(int i=0;i<n;i++)
            {
              cin >> data[i];
              if(data[i]>=max) max=data[i];
              if(data[i]<min) min=data[i];
            }
        /*sum=10000;
        t=0;
        for(int i=min;i<=max;i++){
            for(int j=0;j<n;j++){
                if(data[j]-i>=0) t+=data[j]-i;
                else t+=i-data[j];
             }
             if(sum>t) sum=t;
         }    */
         sum=2*(max-min);
         cout << sum << endl;
    }
}


