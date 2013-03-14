#include <stdio.h>
#include <math.h>
/*
 * sin定理: a/sin(A) = b/sin(B) = c/sin(C) = 2R
 * 叉积求三角形面积: S = (ab/2)*sin(C) = (ab/2)*(c/2R) = abc/4R
 * 因此: R = abc/4S
 * 海伦公式: S = sqrt(p*(p-a)*(p-b)*(p-c))
 * 其中: p = (a+b+c)/2
 * -----------------
 * 方法2
 * a/sin(A) = 2R
 * sin(A) = sqrt(1-cos(A)*cos(A))
 * cos(A) = (b*b + c*c - a*a)/(2*b*c)
 */
#define PI 3.141592653589793

main()
{
    double x1, y1, x2, y2, x3, y3; 
    double a, b, c, p, S, R, t;
    while(scanf("\n%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3) != EOF)
    {
	a = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	b = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	
        p = (a+b+c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	R = a*b*c/(S*4);

	printf("%.2lf\n", 2*PI*R);
    }
    return 0;
}
