                                                            #include<stdio.h>
#include<iostream.h>
main()
{
    int n[100];
    int A[100][1000];
    int b=0;
    int count;
    int k=0;
    int c[100];
    for(int j=0;;j++)
    {
        cin>>n[j];
        if(n[j]==5280){count=j;break;}
         k=0;

         c[j]=0;
        int k;

        for(int i=1;;i++)
        {
            cin>>A[j][i];
            c[j]++;
            if(n[j]==A[j][i])break;
        }
    }
    for(int j=0;j<count;j++)
    {
        A[j][0]=0;
         int m=(n[j]-0)*(n[j]-0);
        for(int i=1;i<=c[j];i++)
        {
            k=(n[j]-A[j][i])*(n[j]-A[j][i]);
            if(A[j][i]==n[j])printf("Moving from %d to %d: found it!\n",A[j][i-1],A[j][i]);

            else if(k==m)printf("Moving from %d to %d: same.\n",A[j][i-1],A[j][i]);
            else if(k>m)printf("Moving from %d to %d: colder.\n",A[j][i-1],A[j][i]);
            else printf("Moving from %d to %d: warmer.\n",A[j][i-1],A[j][i]);
            m=k;
        }
        if(j<count-1)printf("\n");
    }
}



