#include<stdio.h>
#include<iostream.h>
#include<math.h>
main()
{
    int m,n;
    float s;
    int t;
    int k;
    cin>>t;
    k=t;
    while(t--)
    {
        cin>>m>>n;
        int max=m;
        int min=n;
        if(n>m){max=n;min=m;}
        if(m%2==1&&n%2==1)
        {
            s=m*n+sqrt(2)-1;
            printf("Scenario #%d:\n",k-t);
            printf("%.2f\n\n",s);
        }
        else
        {
             s=m*n;
            printf("Scenario #%d:\n",k-t);
            printf("%.2f\n\n",s);
        }
    }
}

        
