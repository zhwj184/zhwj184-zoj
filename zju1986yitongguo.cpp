/* zju1986 Bridging Signals
 * Algorithm DP, nlogn LIS, binSearch implement
 * fluke 2006.2.18
 */
#include <stdio.h>

int res[40000];

int binSearch(int left, int right, int num)
{
	while(left <= right)
	{
		int mid = (left + right) /2;
		if(res[mid] == num)
			return mid;
		else if(res[mid] < num)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return right;
}	

main()
{
	int t, i,n, num;
	int tot,pos;
    scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &num);
		res[0] = num;
		tot = 1;
		for(i=1;i<n;++i)
		{
			scanf("%d", &num);
		     pos = binSearch(0, tot-1, num);
			if(pos == tot - 1)
				res[tot++] = num;
			else
				res[pos+1] = num;   
		}
		printf("%d\n", tot);
	}
	return 0;
}
