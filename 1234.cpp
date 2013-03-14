#include <iostream.h>
#include <string.h>
#include <stdio.h>
int t,k,n,num[5010];
long flag[5010][1010];
void find()
{
    int i,j;
    int p;
    for(j=1;j<=k;j++)
    for(i=j*2;i<=n;i++)
    {
        flag[i][j]=20000000;
        if(i>j*2) flag[i][j]=flag[i-1][j];
        if(n-i>3*(k-j)){
            if(flag[i][j]>flag[i-2][j-1]+(num[i]-num[i-1])*(num[i]-num[i-1]))
             flag[i][j]=flag[i-2][j-1]+(num[i]-num[i-1])*(num[i]-num[i-1]);
         }
    }
}
int main()
{
    cin >> t;
    while(t--)
    {
        cin >> k >> n;
        k=k+8;
        for(int i=1;i<=n;i++)
         cin >> num[i];

    memset(flag,0,sizeof(flag));
    find();
    printf("%.d\n",flag[n][k]);
     }


   // cout << flag[n][k] << endl;
}


