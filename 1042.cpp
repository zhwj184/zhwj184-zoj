http://acm.zju.edu.cn/show_problem.php?pid=1042


#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int len,i,j,k,m,n;
    char  a[81],b[81],c[81];
    char  aa[81],bb[81],cc[81];
    char s[100],t[100];
    int A[100];
    int k1,k2,k3;
    while( cin >> k1 >> k2 >> k3)
    {
        if(k1==0&&k2==0&&k3==0) break;
        cin >> s;
        len=strlen(s);
        i=0;
        j=0;
        k=0;
        for(m=0;m<len;m++)
        {
            if(s[m]>='a'&&s[m]<='i')
            {
                A[m]=1;
                aa[i++]=s[m];
            }
            else if(s[m]>='j'&&s[m]<='r')
            {
                A[m]=2;
                bb[j++]=s[m];
            }
            else
            {
                A[m]=3;
                cc[k++]=s[m];
            }
        }
        for(m=0;m<i;m++)
        {
            a[(m+k1)%i]=aa[m];
        }
         for(m=0;m<j;m++)
        {
            b[(m+k2)%j]=bb[m];
        }
         for(m=0;m<k;m++)
        {
            c[(m+k3)%k]=cc[m];
        }
        i=0;
        j=0;
        k=0;
        for(m=0;m<len;m++)
        {
            if(A[m]==1) cout << a[i++];
            else if(A[m]==2) cout << b[j++];
            else cout << c[k++];
        }
        cout << endl;
    }
}
