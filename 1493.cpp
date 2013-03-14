#include <iostream>
#include <cstdio>
using namespace std;
int n;
char B[10001];
int S[10001],T[10001];
int main()
{
	char temp[3];
	int i,j,k;
	while((scanf("%d",&n))!=EOF)
	{
		for(i = 0; i < n; i++)
		{
			scanf("%s",temp);
			S[i] = 0;
			if(temp[0] >= 'a' && temp[0] <='f')
				S[i] = (temp[0] -'a' + 10) * 16;
			else if	(temp[0] >= 'A' && temp[0] <='F')
				S[i] = (temp[0] - 'A' + 10) * 16;
			else 
				S[i] = (temp[0] - '0') * 16;
			if(temp[1] >= 'a' && temp[1] <='f')
				S[i] += (temp[1] -'a' + 10) ;
			else if	(temp[1] >= 'A' && temp[1] <='F')
				S[i] += (temp[1] - 'A' + 10) ;
			else 
				S[i] += (temp[1] - '0') ;
		}
		if(S[0] > 7)
			T[0] = 7;
		else 
			T[0] = S[0];
		int sum = T[0];
		for(i = 1; i < n; i++)
		{
			k = S[i] - sum;
			if(k < -8)
				T[i] = -8;
			else if(k > 7)
				T[i] = 7;
			else T[i] = k;
			sum += T[i];
		}
		cout << n / 2 << endl;
		//for(i = 0; i < n; i++)
		//	cout << T[i] << " ";
		//cout << endl;
		for(i = 0; i < n; i+=2)
		{
			if(T[i] < 0)
			{
				T[i] =  T[i] + 16;
			}
			if(T[i+1] < 0)
			{
				T[i+1] =  T[i+1] + 16;
			}
			//cout << T[i] << " " << T[i+1] << " ";
			char p ,q;
			if(T[i] >= 10)
				p = 'a' + (T[i] - 10);
			else 
				p = '0' + T[i];
			if(T[i+1] >= 10)
				q = 'a' + (T[i+1] - 10);
			else 
				q = '0' + T[i+1];
			printf("%c",p);
			printf("%c",q);
			if(i % 16  == 14 || i == n-2)
				printf("\n");
			else 
				printf(" ");
		}
	}
}