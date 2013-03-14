#include <iostream>

using namespace std;

int mod(int a,int b,int N)
{
	int m=1;
	int k=a%N;
	while(b>0){
		if(b%2==0)
		{
			k=k*k;
			k=k%N;
			b/=2;
		}
		else {
			b--;
			m=m*k;
			m%=N;
		}
	}
	return m;
}

int main()
{
	int M,N;
	int T;
	int a,b;
	int res;
	   scanf("%d", &T);
	//cin >> T;
	while(T--)
	{
		//cin >> N >> M;
		scanf("%d%d", &N, &M);
		res=0;
		for(int i=0;i<M;i++)
		{
			//cin >> a >> b;
			scanf("%d%d", &a, &b);
			res+=mod(a,b,N);
			res%=N;
		}
		printf("%d\n", res);
		//cout << res << endl;
	}
}
			
