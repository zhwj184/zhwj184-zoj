#include <iostream.h>
#include <cmath>
int main()
{
    int n;
    int A,a,B,b,C,c,D,d;
    cin >> n;
    int M[6];
    for( int s=0;s<n;s++)
    {

        cin >> A >> a >> B >> b >> C >> c >> D >> d;
        cout << "Case " << s+1 << ":" << endl;
        M[0]=(A-B)*(A-B)+(a-b)*(a-b);
        M[1]=(A-C)*(A-C)+(a-c)*(a-c);
        M[2]=(A-D)*(A-D)+(a-d)*(a-d);
        M[3]=(B-C)*(B-C)+(b-c)*(b-c);
        M[4]=(B-D)*(B-D)+(b-d)*(b-d);
        M[5]=(C-D)*(C-D)+(c-d)*(c-d);
      for(int i=0;i<5;i++)
      for(int j=0;j<5-i;j++)
       {
        int k;
       if(M[j]<M[j+1])
       {k=M[j];M[j]=M[j+1];M[j+1]=k;}
       }
   if(M[0]==M[1]&&M[1]==2*M[2]&&M[2]==M[3]&&M[3]==M[4]&&M[4]==M[5])
   cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
   if(s!=n-1)
   cout<<endl;
    }
}
