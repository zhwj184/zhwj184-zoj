#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    char key[27];
    int num[27],B[27];
    char s[27];
    char  plain[101],cip[101];
    int i,j,k,m,n;
    int len;
    int T;
    char ch;
    cin >> T;
    while(T--)
    {
        cin >> key ;
        cin >> plain;
        len=strlen(key);
        strcpy(s,key);
        for(i=0;i<len;i++)
         {
            num[i]=i+1;
            B[i]=i;
         }
        /*for(i=0;i<len;i++)
            cout << num[i] << " " ;
            cout << endl;*/
        for(i=0;i<len-1;i++)
            for(j=i+1;j<len;j++)
            {
                if((key[i]-'A')>(key[j]-'A'))
                {
                    ch=key[i];
                    key[i]=key[j];
                    key[j]=ch;
                  /*  k=num[i];
                    num[i]=num[j];
                    num[j]=k;   */
                }
            }
        for(i=0;i<len;i++)
        {
            for(j=0;j<len;j++)
            {
                if(s[i]==key[j])
                {
                    num[i]=j;
                    break;
                }
            }
        }
        //cout << len << endl;
        //cout << key << endl;
      /*  for(i=0;i<len;i++)
            cout << num[i] << " " ;
            cout << endl;*/
        k=strlen(plain);
        for(i=0;i<k;i++)
            plain[i]=tolower(plain[i]);
        m=0;
        
         for(i=0;i<len-1;i++)
            for(j=i+1;j<len;j++)
            {
                if(num[i]>num[j])
                {
                    m=num[i];
                    num[i]=num[j];
                    num[j]=m;
                    m=B[i];
                    B[i]=B[j];
                    B[j]=m;
                }
            }
       /*    for(i=0;i<len;i++)
            cout << B[i] << " " ;
            cout << endl;
         */
        m=0;
        int p,q;
        p=k/len+1;
        for(i=0;i<len;i++)
        {
            for(q=0;q<p;q++)
            {
                if(B[i]+len*q<k)
                {
                    cip[B[i]+q*len]=plain[m++];
                }
            }
        }
        cip[m]='\0';
        cout << cip << endl;
        
            

            
    }

}
