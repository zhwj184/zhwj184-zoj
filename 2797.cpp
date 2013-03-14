#include <iostream>
#include <fstream>
#include <algorithm>
#include <cassert>
using namespace std;

#define MAXN 128

int main() {
	int n, m;
	int i,j,k;
	int a,b,p;
	while(cin >> n)
	{
	//   assert(n>=2&&n<=100);
	   if(n==0)break;
	   cin >> m;
	   double pro[MAXN][MAXN]={{0}};
	//   assert(m>=1&&m<=n*(n-1)/2);
	   for(i=0;i<m;i++)
	   {
	       cin >> a >> b >> p;
	       a--;
	       b--;
	       pro[a][b]=pro[b][a]=0.01*p;
      }
      for (int mid = 0; mid < n; mid++)
			for (int from = 0; from < n; from++) {
			
				if (pro[from][mid] == 0.0)
					continue;
				for (int to = 0; to < n; to++)
					pro[from][to] = max(pro[from][to],pro[from][mid] * pro[mid][to]);
			}

	 pro[0][n-1]*=100;
	 cout.setf(ios::fixed);
	 cout.precision(6);
 	 cout << pro[0][n-1] << " percent" << endl;
   }
}    	
