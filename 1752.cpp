不到1秒过了，用数组下标记录点，用数组对应值记录颜色值。

#include <stdio.h>
#include <iostream.h>

int main()
{
	int n,c;
	int A[201][201];
	int i,j,k,m;
	int x1,x2,y1,y2;
	int t=1;
	while( cin >> n >> c)
	{
		if(n==0)break;
		for(i=0;i<201;i++)
			for(j=0;j<201;j++)
				A[i][j]=0;
		for(i=0;i<n;i++)
		{
			scanf("%d%d%d%d%d",&k,&x1,&y1,&x2,&y2);
			if(x2<x1){ int temp=x1;x1=x2;x2=temp;}
			if(y2<y1){int temp=y1;y1=y2;y2=temp;}
			//cout << x1 << y1 << x2 << y2 << endl;
			x1+=100;
			x2+=100;
			y1+=100;
			y2+=100;
			
			if(x1<=x2&&y1<=y2)
			{
				for(j=x1;j<x2;j++)
					for(m=y1;m<y2;m++)
						A[j][m]=k;
			}
		/*	else
			{
				for(j=x1;j<=x2;j++)
					for(m=y2;m<=y1;m++)
						A[j][m]=k;
			}*/

		}
		int count=0;
		for(i=0;i<201;i++)
			for(j=0;j<201;j++)
				if(A[i][j]==c) count++;

		cout << "The area of color "<< c << " in dataset " << t << " is: " << count << endl;
	    t++;
	}
}

