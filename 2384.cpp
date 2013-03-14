#include <iostream>
#include <cstdio>
#include <iomanip>
#include <sstream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	char p[256][256],input[256],output[256];
	int i,j,k,n;
	char ch[6];
	int t=0;
	while(scanf("%d",&n))//cin >> n && n)
	{
		//getchar();
		if(n == 0)
			break;
		if(t++)
			printf("\n");
		memset(p,0,sizeof(p));
		memset(output,0,sizeof(output));
		for(i = 0; i < n;i++)
		{
			for(j = 0; j < 6; j++)
				scanf(" %c",&ch[j]);//			cin >> ch[j];
			for(j = 0; j < 5; j++)
				p[ch[5]][ch[j]] = 1;
			for(j = 0; j < 5; j++)
				output[ch[j]] = 1;
			//getchar();
		}
		for(i = 'A'; i <= 'Z'; i++)
			for( j = 'A'; j <= 'Z'; j++)
				for( k = 'A'; k <= 'Z'; k++)
					p[j][k] |= ( p[j][i] && p[i][k]);
		for(j = 0;j < 256; j++)
		{
			if(!output[j])
				continue;
			printf("%c",j);//cout << (char) j ;
			output[j] = 0;
			for( i = j+1; i < 256; i++)
				if(p[j][i] && p[i][j])
				{
					printf(" %c",i);//cout << " " << (char) i ;
					output[i]  = 0;
				}
			printf("\n");
				//putchar('\n');//cout << endl;
		}
	}
}
