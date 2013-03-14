#include<iostream>
using namespace std;
const int LENGTH = 2000;
long long hamming[LENGTH];
long long minv, p[3];
int p1, p2, p3, n, cnt;

int main()
{
    while(cin >> p[0] >> p[1] >> p[2] >> n)
    {
        p1=p2=p3=0;
        cnt=0;
        hamming[0]=1;
        while(cnt<n)
        {
            minv = hamming[p1] * p[0];
            if(hamming[p2] * p[1] < minv){minv = hamming[p2] * p[1];}
            if(hamming[p3] * p[2] < minv){minv = hamming[p3] * p[2];}
            hamming[++cnt] = minv;
            if(hamming[p1] * p[0] == minv) p1++;
            if(hamming[p2] * p[1] == minv) p2++;
            if(hamming[p3] * p[2] == minv) p3++;
        }
        cout << minv << endl;
    }
}
