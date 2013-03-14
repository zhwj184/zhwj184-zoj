#include<iostream.h> 
#include<string.h> 
int a[100]; 
int n,i,j,m,s1,s2,t,s; 
int abs(int r) 
{
   return r>0 ? r : -r ;
}      
int main() 
{ 
    while(cin>>n) 
    {  memset(a,0,sizeof(a)); 
       s1=s2=0; 
       for(i=0;i<n;i++) 
        cin>>a[i]; 
        m=n/2; 
      for(i=0;i<m;i++) 
       s1=s1+a[i]; 
      for(i=m;i<n;i++) 
       s2=s2+a[i]; 
      while(1) 
        { s=1; 
          for(i=0;i<m;i++) 
            for(j=m;j<n;j++) 
             if(abs((s1-a[i]+a[j])-(s2+a[i]-a[j]))<abs(s1-s2)) 
              { s=0; 
                s1=s1-a[i]+a[j]; 
                s2=s2+a[i]-a[j]; 
                t=a[i]; 
                a[i]=a[j]; 
                a[j]=t; 
              }  
          if(s==1) 
              { 
                  if(s1>s2) { t=s1;s1=s2;s2=t;} 
                  cout<<s1<<' '<<s2<<endl; 
                  break; 
             }                                      
        }    
                  
    }    
     return 0; 
}