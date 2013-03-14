 #include <iostream>
  #include <cstdio>
  using namespace std;
  int main()
  {
     bool res[10001][101];
     int i,j,k;
     int A[10001];
     int n;
     int cas;
     cin >> cas;
     while(cas--)
     //while( cin >> n >> k)
     {
          scanf("%d%d",&n,&k);
         // cin >> n >> k;
          for(i=0;i<n;i++)
          scanf("%d",&A[i]);
           // cin >> A[i];

          int temp;
          temp=A[0]%k;
          if(temp<0) temp+=k;
          for(i=0;i<n;i++)
            for(j=0;j<=k;j++)
             res[i][j]=false;

          res[0][temp]=true;
          for(i=1;i<n;i++)
            for(j=0;j<=k;j++)
            {
               if(res[i-1][j])
               {
                      temp=(A[i]+j)%k;
                      if(temp<0) temp+=k;
                    res[i][temp]=true;
                      temp=(j-A[i])%k;
                      if(temp<0) temp+=k;
                    res[i][temp]=true;
               }
            }
          if(res[n-1][0]) cout << "Divisible" << endl;
          else cout << "Not divisible" << endl;
          if(cas>0) cout << endl;
          
     }
  }
