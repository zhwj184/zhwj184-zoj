#include <stdio.h>
#include <string.h>


int gid[1000][1000];
bool f1[1000][1000],f2[1000][1000];
int m,n;

int main()
{
	int i,j,k;
	int num;

	while(scanf("%d%d",&n,&m)!=EOF)   //cin >> n >> m)
	{
		memset(f1,0,sizeof(f1));
		memset(f2,0,sizeof(f2));
		num=0;
		
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				scanf("%d",&gid[i][j]);

		for(i=n-1;i>=0;i--)
			for(j=m-1;j>=0;j--)
			{
				if(!gid[i][j]) 
					continue;

				if(!f1[i][j]){
					if(!f2[i][j])
						num++;
					for(k=i;k>=0;k--)
						f1[k][j]=1;
					for(k=j-1;k>=0&&(gid[i][j]--);k--)
						f2[i][k]=1;
				}
				else {
					for(k=j-1;k>=0&&(gid[i][j]--);k--)
						f2[i][k]=1;
				}
			}
			printf("%d\n",num);
			//cout << num << endl;
	}
}



