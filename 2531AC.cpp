#include<cstdio>
using namespace std;
int bc(int x){ return x^(x>>1); }
int cb(int x) { int y; for(y=x;x>>=1;y^=x); return y; }
int main()
{
  for(int n,m,i;scanf("%d%d",&n,&m),n||m;puts(""))
	 {
		 printf("%d",m); m=cb(m);
		for(i=1;i<n;i++)
			 {
				 if(++m==n) m=0;
				 printf(" %d",bc(m));
			 }
	 }
		return 0;
}
