#include <iostream.h>
#include<climits>
 int salary,hire,fire;
inline long compute(int i,int k)
{
     if(i>k) return (i-k)*fire+k*salary;
     else return   k*salary+(k-i)*hire;
}
int main()
{
     int sum[13][10000];
     int n,m,i,j,k;
     int work[13],min;

     int max;
     while(cin >> n && n!=0)
     {
          max=0;
          cin >> hire>> salary >> fire;
          for(i=0;i<13;i++)
            for(j=0;j<10000;j++)
              sum[i][j]=0;

          for(i=0;i<n;i++)
          {
               cin >> work[i];
               if(work[i]>max)
                  max=work[i];

          }
          
          for(i=work[0];i<=max;i++)
            sum[0][i]=(salary+hire)*i;

          for(j=1;j<n;j++)
           for(k=work[j];k<=max;k++)
           {
               sum[j][k]=INT_MAX;
               for(i=work[j-1];i<=max;i++)
               {
                    if(sum[j][k]>sum[j-1][i]+compute(i,k))
                         sum[j][k]=sum[j-1][i]+compute(i,k);
               }
           }
           min=INT_MAX;
           for(i=work[n-1];i<=max;i++)
             if(sum[n-1][i]<min) min=sum[n-1][i];
           cout << min << endl;
     }
}
