#include <iostream>
#include <cstdlib>
#include <cstring>
#include <iomanip>

using namespace std;

int a[101],b[100002];

float opt[101], c[100002];

const float MAX = 210000000;

int main()
{
	int m,n;
	int i,j,k;
	while( cin >> m  >> n )
	{
		//memset(opt,MAX,sizeof(opt));

		if( m == 0 && n == 0 )
			break;
		for( i = 1 ; i <= m ; i++ )
		{
			//cin >> a[i];
			scanf("%d",a+i);
			opt[i] = MAX;
		}
		for( j = 1 ; j <= n ; j++ )
		{
			//cin >> b[j]  >> c[j];
			scanf("%d%f",&b[j],&c[j]);
		}
		
		opt[0]=0;
		for( i = 1; i <= n; i++)
			for( j = m; j > 0; j--)
			{
				if( a[j] == b[i] && opt[j] > opt[j-1]+c[i])
				{
					opt[j] = opt[j-1]+c[i];
				}
			}

		if( opt[m] == MAX )
			cout << "Impossible" << endl;
		else cout << fixed << setprecision(2) << opt[m] << endl;
	}
}


