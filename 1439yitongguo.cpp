                       #include<stdio.h>
#include<math.h>

main()
{
	int x1,x2,x3,y1,y2,y3,z1,z2,z3;
	float   s,a,b,c,t;
	float r1,r2;
	float k;
	while((scanf("%d",&x1))!=EOF)
	{
		scanf("%d%d%d%d%d%d%d%d",&y1,&z1,&x2,&y2,&z2,&x3,&y3,&z3);
		a=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
		b=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1)+(z3-z1)*(z3-z1));
	c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)+(z3-z2)*(z3-z2));
		t=a+b+c;
		k=t/2;
		s=sqrt(k*(k-a)*(k-b)*(k-c));
		r1=(1.0*a*b*c)/(4*s);
		r2=2*s/t;
		k=r2*r2/r1/r1;
		printf("%.3f\n",k);
	}
}
