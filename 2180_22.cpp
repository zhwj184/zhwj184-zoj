#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int m[1001];
	int r[1001],l[1001];
	int mi,ma;
	int i,j,k;
	char ch;
	int row,col;
	int T;
	scanf("%d",&T);
	//cin >> T;
	while(T--)
	{
		//cin >> row >> col;
		scanf("%d %d ",&row,&col);
		ma  = 0;
		for(i = 0; i < col ;i++)
		{
		 m[i] = 0;
		}
		//getchar();
		for(i = 0; i < row; i++)
		{
			 for(j = 0; j < col; j++)
			 {
			 	//cin >> ch;
			 	//if(j!=col-1)
				  scanf("%c ",&ch);
			 	//else 
				//  scanf("%c\n",&ch);
				 if(ch == 'R')
			 		m[j] = 0;
		 		else 
		 			m[j] ++;
		 		
			 }
			
		  	 //getchar();
			 for(j = 0; j < col; j++)
			 {
			 	l[j] = j;
			 	while(l[j] > 0 && m[j] <= m[l[j]-1])
			 		l[j] = l[l[j]-1];
			 }
			 for(j = col - 1; j >= 0; j--)
			 {
			 	r[j] = j;
			 	while(r[j] < col-1 && m[j] <= m[r[j]+1])
			 		r[j] = r[r[j]+1];
		 		if(ma < (r[j] - l[j] + 1) * m[j])
		 			ma = (r[j] - l[j] + 1) * m[j];
			 }
			/* 
		    for(j = 0; j < col;j++)
			 	cout << m[j] << " ";
			 	cout << endl;
		 	 for(j = 0; j < col;j++)
			 	cout << l[j] << " ";
			 	cout << endl;
		 	 for(j = 0; j < col;j++)
			 	cout << r[j] << " ";
			 	cout << endl;
			 	*/
		}
		printf("%d\n",ma * 3);
		 	
	}
}
