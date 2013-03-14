 #include <iostream.h>
 #include <stdio.h>
 #include <string.h>
 int main()
 {
    int flag[1000];
    int i,j,k,m,n;
    int cas;
    scanf("%d",&cas);
    //cin >> cas;
  //  getchar();
  //  getchar();
   // cout << endl;
    while(cas--)
    {
      //  getchar();
        cin >> n;
       // getchar();
      //  if(cas>0)
      //   cout << endl;
        i=0;
        int f=1;
        j=2;
        memset(flag ,0,sizeof(flag));
       while(n>=j)
            {
              n-=j;
              flag[i]=j;
              j++;
              i++;

            }
       // cout << i << endl;
        while(n>0)
        {
        for(k=i-1;n>0&&k>=0;k--,n--)
        {
            flag[k]++;
           // if(k=0)k=i-1;
         //   cout << "YES " << endl;
        }
        }
        for(k=0;k<i-1;k++)
        cout << flag[k] << " ";
        cout << flag[i-1] << endl;
       if(cas>0) cout << endl;
    }
 }

            
