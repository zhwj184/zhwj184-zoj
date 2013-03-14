#include<stdio.h>
#include<iostream.h>
main()
{
    int t;
    int n;
    long max;
    int w[1000],s[1000];
    int i,j,k,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        cin>>s[i];
        for(j=0;j<n;j++)
        {
            m=0;
         for(k=0;k<n;k++)
         {
            if(s[k]>=s[j])
            m++;
         }
         w[j]=m*s[j];
        }
        max=w[0];
        for(m=1;m<n;m++)
        if(max<w[m])max=w[m];
        cout<<max<<endl;
    }
}

