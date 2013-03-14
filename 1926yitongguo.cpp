#include<stdio.h>
#include<math.h>
struct point
{
	double x;
	double y;
};
double distance(point p1,point p2)
{
	return sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y));
}
main()
{
	point p[30000];
    int A[1000];
	double B[3000];
	int i,j,k,m,n;
	i=0;
	double p_p,max;
	while((scanf("%d",&A[i]))!=EOF)
	{
		max=0;
		for(j=0;j<A[i];j++)
			scanf("%d%d",&p[j].x,&p[j].y);
        for(m=0;m<(A[i]-1);m++)
			for(n=1;n<A[i];n++)
				if(distance(p[m],p[n]))max=distance(p[m],p[n]);
		B[i]=max;
		i++;

	}
	for(j=0;j<i;j++)
		printf("%.2f",B[j]);
}
