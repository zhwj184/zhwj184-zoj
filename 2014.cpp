#include <iostream.h>
#include <stdio.h>
int main()
{
    int f,e;
    int coin[512],wei[512];
    int best[10241];
    int i,j,k,m,n;
    cin >> n;
    while( n--)
    {
        cin >> e >> f;
        cin >> m;
        for(i=0;i<m;i++)
         cin >> coin[i] >> wei[i];

      best[0] = 0;
    //  for(i=0;i<10241;i++) best[i]=0;
      f-=e;
      for ( j = 1;  j <= f;  ++j )
      {
         best[j] = 0x3FFFFFFF;
         for ( i = 0;  i < m;  ++i )
            if ( wei[i] <= j )
               if ( best[j - wei[i]] + coin[i] < best[j] )
                  best[j] = best[j - wei[i]] + coin[i];
                  
      }
      printf ((best[f] <0x3FFFFFFF)
            ? "The minimum amount of money in the piggy-bank is %d.\n"
            : "This is impossible.\n",
            best[f]);
     /*   for(i=0;i<m-1;i++)
         for(j=i+1;j<m;j++)
         {
            if(coin[i]*wei[j]>coin[j]*wei[i])
            {
                k=coin[i];
                coin[i]=coin[j];
                coin[j]=k;
                k=wei[i];
                wei[i]=wei[j];
                wei[j]=k;
            }
         }
         f=f-e;
         int min=0;
         i=0;
         while(f>=0)
         {
            if(i==m) break;
            j=f/wei[i];
            if(j>0)
            {
                f=f-j*wei[i];
                min=min+j*coin[i];
            }
            i++;
         }
         if(f==0)
         cout <<"The minimum amount of money in the piggy-bank is " << min << "."<< endl;
         else cout << "This is impossible." << endl;   */
    }
}


