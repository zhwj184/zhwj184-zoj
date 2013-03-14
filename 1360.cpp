#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;
struct points{
	double x,y;
	double center;
}point[1005];
double d;
int flag;
int sum = 0;
int n;
bool cmp(const points &a,const points &b)
{
	return b.center > a.center;
}
double calu_center(double x,double y)
{
	return (x + sqrt(d * d - y * y));
}
double distance(double x1,double y1,double x2,double y2)
{
	return sqrt((x1-x2) * (x1 - x2) + (y1-y2)*(y1-y2));
}
void calu_result()
{
	sum = 1;
	double center = point[0].center;
	for(int i = 1; i < n; i++)
	{
		if(distance(point[i].x,point[i].y,center,0) > d)
		{
			center = point[i].center;
			sum++;
		}
	}
}
int main()
{
	int num = 1;
	while(scanf("%d%lf",&n,&d))
	{
		flag = 1;
		if(n == 0 && d == 0)
			return 0;
		for(int i = 0; i < n; i++)
		{
			scanf("%lf%lf",&point[i].x,&point[i].y);		
			if(point[i].y > d || d == 0)
				flag = 0;
			else 	
				point[i].center = calu_center(point[i].x,point[i].y);
				
		}
		sort(&point[0],&point[n],cmp);
		printf("Case %d: ",num);
		//cout << "Case " << num << ": ";
		if(flag == 0)
			printf("-1\n");
			//cout << "-1" << endl;
		else {
		    calu_result();
			printf("%d\n",sum);
			//cout << sum << endl;
		}
		num++;	
	}
}
