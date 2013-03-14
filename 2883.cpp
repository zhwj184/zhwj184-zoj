#include<iostream>
#include <cstring>
#include <string>
#include <cctype>
#include <cstdio>
using namespace std;

long sum;
long data[20001];
long A[20001];
int i,j,k,m,n;

int main()
{
    int cas;
    long max;
    cin >> cas;
    while(cas--){
        cin >> n;
        max=0;
        memset(A,0,sizeof(A));
        for(i=0;i<n;i++){
            scanf("%d",&data[i]);
            A[data[i]]++;
            //data[k]++;
            if(data[i]>max) max=data[i];
        }
        sum=0;
        k=max;
        i=0;
        while(k){
            if(A[k]>0){
                data[i++]=k;
                A[k]--;
            }
            else k--;
        }

        /*m=3;
        while(k){
            if(m>0){
                if(data[k]>0)
                    {
                     data[k]--;
                     m--;
                    }
                else k--;

            }
            else {
                if(data[k]>0)
                {
                    sum+=k;
                    m=3;
                    k--;
                }
             }
        }   */
        /*for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
            if(data[i]<data[j])
            {
                k=data[i];
                data[i]=data[j];
                data[j]=k;
            }    */
        for(i=2;i<n;i+=3)
            sum+=data[i];
        cout << sum << endl;
    }
}

