#include<stdio.h>
main()
{
      int i,j,k,m,n;
      int A[100];
      long int B[100][100],C[100][100];
      long int start[100],count[100];
      int W[100][1000];
      i=0;
      char s[100][100];
      long min,max;
      int num[2000];
      while((scanf("%d",&A[i])!=EOF)
      { 
               scanf("%d%d%c",&B[i][0],&C[i][0],&s[i][0]);
               min=B[i][0];
               max=C[i][0];
               for(j=1;j<A[i];j++)
               {
                                  scanf("%d%d%c",&B[i][j],&C[i][j],&s[i][j]);
                                  if(min>B[i][j])min=B[i][j];
                                  if(max<C[i][j])max=C[i][j];
               }
               for(j=min;j<=max;j++)num[j]=0;
               for(j=0;j<A[i];j++)
               {
                                   if(s[i][j]=='b')
                                   for(k=B[i][0];k<=C[i][0];k++)num[k]=0;
                                   else
                                   for(k=B[i][0];k<=C[i][0];k++)num[k]=1;
               }
               count=0;
               for(j=min;j<=max;j++)
               {
                                    if(num[j]==1){m=j;count[i]++;}                                                                                                                                                       
