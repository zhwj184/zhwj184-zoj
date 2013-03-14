#include <stdio.h>
#include <iostream.h>
#define MAXSIZE 1000

char n1[MAXSIZE], n2[MAXSIZE], n3[MAXSIZE];

char *f1 = n1, *f2 = n2, *f3 = n3, *t;

void add(char *f1,char *f2,char *f3)
{
    for(int i=0;i<MAXSIZE;i++)
    {
        f3[i]='0';
    }
    for(int i=0;i<MAXSIZE;i++)
    {
        f3[i]=(f1[i]-'0')+(f2[i]-'0')+(f3[i]-'0')+'0';
        if(f3[i]-'0'>=10)
        {
          f3[i]=f3[i]-'0'-10+'0';
          f3[i+1]='1';
        }
    }
}
void ptr(char *n)
{
    int i;
    for(i=MAXSIZE-1;i>=0&&n[i]=='0';i--);
    for(int j=i;j>=0;j--)
    cout << (n[j]-'0');
    cout << endl;
}
int main()
{
    int i;

    int n;
    while(cin >> n)
    {
    for(i=0;i<MAXSIZE;i++)
    {
        f1[i]='0';
        f2[i]='0';
    }
    f1[0]='1';
    f2[0]='1';
    for(i=0;i<n;i++)
    {
            add(f1,f2,f3);
            t=f1;
            f1=f2;
            f2=f3;
            f3=t;
    }
    ptr(f3);
    }
}
            
    
        


