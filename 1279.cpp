#include <iostream.h>
#include <ctype.h>
#include <stdio.h>
int main()
{
     char sym[4][4];
     char c,ch;
     char n1[8],n2[8],res[8];
     int i,j,k,n,ss;
     int s,t;
     char num1[9],num2[9];
     char sss[17]="VUCDUCDVCDVUDVUC";
     for(i=0;i<4;i++)
     for(j=0;j<4;j++)
     {
       sym[i][j]=sss[i*4+j];
// cout << sym[i][j] ;
// if(j==3) cout << endl;
     }
     cout << "COWCULATIONS OUTPUT\n";
     cin >> n;
     int w=n;

     //while(n--)
     for(int x=0;x<n;x++)
     {
        //gets(n1);
        //gets(n2); ÓÃgets³ö´í
        cin >> n1 >> n2;
        //if(w=n-1) cout << "COWCULATIONS OUTPUT\n";
        int len1=strlen(n1);
        int len2=strlen(n2);
        for(i=0;i<8;i++)
        {
            num1[i]='V';
            num2[i]='V';
        }
        s=8-len1;
        for(i=0;i<len1;i++)
        {
            num1[i+s]=n1[i];
        }
        s=8-len2;
        for(i=0;i<len2;i++)
        {
            num2[i+s]=n2[i];
        }
        num1[8]='\0';
        num2[8]='\0';
        //cout << num1 << endl ;
        //cout << num2 << endl;
        int flag=0;
        for(i=0;i<3;i++)
        {
            cin >> c;
            if(c=='A')
            {
                for(j=7;j>=0;j--)
                {
                     if(num1[j]=='V') s=0;
                     else if(num1[j]=='U') s=1;
                     else if(num1[j]=='C') s=2;
                     else if(num1[j]=='D') s=3;
                     if(num2[j]=='V') t=0;
                     else if(num2[j]=='U') t=1;
                     else if(num2[j]=='C') t=2;
                     else if(num2[j]=='D') t=3;
                     if(flag)
                     {
                        num2[j]=sym[s][1];
                        if(1+s>3) flag=1;
                        else flag=0;
                         if(num2[j]=='V') ss=0;
                         else if(num2[j]=='U') ss=1;
                         else if(num2[j]=='C') ss=2;
                         else if(num2[j]=='D') ss=3;
                         num2[j]=sym[ss][t];
                         if(t+ss>3) flag=1;
                         //else flag=0;
                     }
                     else
                     {
                        num2[j]=sym[t][s];
                        if(s+t>3) flag=1;
                        else flag=0;
                     }
                }
                flag=0;
                // cout << num2 << endl;
            }
            else if(c=='R')
            {
                for(j=7;j>0;j--)
                  num2[j]=num2[j-1];
                num2[0]='V';
            }
            else if(c=='L')
            {
                for(j=0;j<7;j++)
                  num2[j]=num2[j+1];
                num2[7]='V';
              //  cout << num2 << endl;
            }
        }


        cin >> res;
       // cout << "COWCULATIONS OUTPUT\n";
        if(strcmp(res,num2)==0) cout << "YES\n";
        else cout <<"NO\n";
     }
     cout << "END OF OUTPUT\n";
}


        
