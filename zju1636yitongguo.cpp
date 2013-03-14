/* zju1636 Evaluate Matrix Sum
 * Algorithm DP
 * fluke 2006.2.19
 */
#include <stdio.h>

int main()
{
	int kase = 0, t;
	int m, n;
	int i,j;
	int left_up_sum[512][512];
	scanf("%d", &t);
	while(t--)
	{
		printf("Case %d:\n", ++kase);
		scanf("%d %d", &m, &n);
		int num;
		for(j=0;j<n;++j) left_up_sum[0][j] = 0;
		for(i=0;i<m;++i) left_up_sum[i][0] = 0;
		for(i=1;i<=m;++i)
			for(j=1;j<=n;++j)
		    {
			    scanf("%d", &num);
				// cal out the left-up sum
				left_up_sum[i][j] = left_up_sum[i][j-1] + left_up_sum[i-1][j] + num*num - left_up_sum[i-1][j-1];
			}
        
		int c;
		scanf("%d", &c);
		int x1, y1, x2, y2;
		while(c--)
		{
			scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
			printf("%d\n", left_up_sum[x2][y2] - left_up_sum[x1-1][y2] - left_up_sum[x2][y1-1] + left_up_sum[x1-1][y1-1]);
		}
		/*
		// debug
		for(int i=1;i<=m;++i)
		{
			for(int j=1;j<=n;++j)
			    printf("%d ", left_up_sum[i][j]);
			printf("\n");
		}*/
	}
	return 0;
}
