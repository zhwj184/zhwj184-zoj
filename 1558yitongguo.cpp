     #include <iostream>
using namespace std;
#define N 1200
int main()
{
int times;
int i,j,k,s;
int c[N+1];
int a[7];
int d[101];
int temp;

int sum;
int max;
a[0]=0;
scanf("%d",&times);
for(i=0;i<times;i++){
for(j=1;j<7;j++){
scanf("%d",&a[j]);
c[a[j]]=1;
for(k=a[j-1]+1;k<a[j];k++){
c[k]=N;
for(s=1;s<=k/2;s++){
temp=c[s]+c[k-s];
if(temp<c[k])c[k]=temp;
}
}
}

for(k=a[6]+1;k<=N;k++){
c[k]=N;
for(j=1;j<=k/2;j++){
temp=c[j]+c[k-j];
if(temp<c[k])c[k]=temp;
}
}
max=0;
sum=0;
for(j=1;j<101;j++){
d[j]=c[j];
for(k=N;k>j;k--)
{
temp=c[k]+c[k-j];
if(temp<d[j])d[j]=temp;
}
if(max<d[j])max=d[j];
sum+=d[j];
}
printf("%.2lf %d\n",double(sum)/100,max);
}
return 0;
}
