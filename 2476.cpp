http://acm.zju.edu.cn/show_problem.php?pid=2476


#include <string>
#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char s[10001][30],t[30];
    long a,b,c,sum;
    int i,j,k,m,n;
    while( cin >> n)
    {
        if(n==0) break;
        sum=0;
        for(i=0;i<n;i++)
        {
         cin >> s[i];
         m=strlen(s[i]);
         a=0;
         for(j=1;j<m;j++)
         {
            if(s[i][j]!=','&&s[i][j]!='.')
             a=a*10+(s[i][j]-'0');
         }
         sum+=a;
       //  cout << a << endl;
        }
       // cout << sum << endl;
       memset(t,' ',sizeof(t));
       if(sum<100)
       {
        t[0]=(sum%10-0)+'0';
        t[1]=((sum%100-sum%10)/10+'0');
        t[2]='.';
        t[3]='0';
        j=4;
       }
       else
       {

        t[0]=(sum%10-0)+'0';
        t[1]=((sum%100-sum%10)/10+'0');
        sum/=100;
        t[2]='.';
        k=0;
        j=3;
      //  cout << t[0] << t[1] << t[2] << endl;
        while(sum)
        {
            if(k!=3)
            {
            t[j]=sum%10+'0';
            sum/=10;
            j++;
            k++;
            }
            else
            {
                t[j]=',';
                k=0;
                j++;
            }
        }
       }
        cout << "$";
        for(i=j-1;i>=0;i--)
        cout << t[i];
        cout << endl;
    }
}
  