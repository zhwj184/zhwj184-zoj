#include<stdio.h>
#include<iostream.h>
main()
{
    int m;
    int A[5001];
    int B[5001];
    int i,j,k;
    while(cin>>m)
    {
        int count=0;
        int min;
        cin>>A[0];
        for(i=1;i<m;i++)
        {
            cin>>A[i];
            for(j=0;j<i;j++)
            {
            if(A[j]>A[i])count++;
            }
        }
        min=count;
         for(i=0;i<m;i++)
        {

           for(j=0;j<i;j++)
          {
             if(A[j]>A[i])count+=1;
             else count-=1;
          }

            for(k=(i+1);k<m;k++)
            {
                if(A[i]<A[k])count+=1;
                else count-=1;
            }
            if(min>count)min=count;
        }
     cout<<min<<endl;
    }
}


