#include<iostream.h>
#include<ctype.h>
#include<string.h>
main()
{
    char s[100000],t[100000];
    long  i,k,j,m,n;
    while(cin>>s>>t)
    {
       int lenS,lenT;
     lenS=strlen(s);
     lenT=strlen(t);
     long  count=0;
      i = j = 0;
           while( i < lenS && j < lenT )
           {
                 if( s[i] == t[j] )
                       i++, j++;
                 else
                       j++;
           }
           if( i < lenS )
                 cout << "No" << endl;
           else
                 cout << "Yes" << endl;
                 /*

     for(i=0;i<lenT&&count<=lenS;i++)
     {
        if(s[count]==t[i])count++;
     }
     if(count-1==lenS)cout<<"No"<<endl;
     else cout<<"Yes\n";*/
    }
}
