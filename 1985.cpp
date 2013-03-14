#include<cstdio>
#include <iostream>
using namespace std;

const int MAX_LEN = 100000;
int dp_left[MAX_LEN], dp_right[MAX_LEN];
int a[MAX_LEN];
int n;

void dp_procedure(){
 for (int i=0;i<n;i++){
  int left = i;
  while (left>0&&a[left-1]>=a[i])
   left = dp_left[left-1];
  dp_left[i] = left;
 }
 for (int i=n-1;i>=0;i--){
  int right = i;
  while (right<n-1&&a[right+1]>=a[i])
   right = dp_right[right+1];
  dp_right[i] = right;
 }
}
void solve()
{
	double res=0.0;
	for(int i=0;i<n;i++)
          if((dp_right[i]-dp_left[i]+1)*(double)a[i]>res)
			  res=(dp_right[i]-dp_left[i]+1)*(double)a[i];
	printf("%0.0lf\n",res);
}

int main()
{
	while( cin >> n && n)
	{
		for(int i=0;i<n;i++)
		    scanf("%d",&a[i]);
		dp_procedure();
		solve();
	}
}