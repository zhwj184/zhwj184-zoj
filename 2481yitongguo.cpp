#include<stdio.h>
main()
{
      int A[100];
      int C[100][101];
      int count[100];
      int i,j,k,m,n;
      int temp;
      int B[100][101];
      for(i=0;;i++)
      {
                   scanf("%d",&A[i]);
                   if(A[i]==0)
                   {
                              k=i;
                              break;
                   }
                   for(j=0;j<A[i];j++)
                   {
                              scanf("%d",&C[i][j]);
                   }
                   n=0;
                   C[i][0]=C[i][0];
                   for(j=1;j<A[i];j++)
                   {
                              temp=C[i][j];
                              for(m=j;m>0&&C[i][m-1]>temp;m--)
                                     C[i][m]=C[i][m-1];
                                     C[i][m]=temp;
                   }
                   count[i]=0;
                   B[i][0]=C[i][0];
                   for(j=1;j<A[i];j++){

                     if(C[i][j]!=C[i][j-1])
                          count[i]++;
                          n=count[i];
                          B[i][n]=C[i][j];
                   }
                   

                   
      }
      for(i=0;i<k;i++)
      {
          for(j=0;j<count[i];j++)
          printf("%d ",B[i][j]);
          n=count[i];
          printf("%d\n",B[i][n]);
      }
      

}
